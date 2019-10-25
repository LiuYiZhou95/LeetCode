//
//  SharedPtr.h
//  SharedPointer
//
//  Created by action.zhou on 2019/8/9.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#pragma once

template <class T>
class SharedPointer
{
public:
    SharedPointer(T *);
    SharedPointer &operator=(const SharedPointer<T> &);
    SharedPointer(const SharedPointer<T> &);
    ~SharedPointer();
    inline T* get() const
    {
        return obj;
    }
private:
    T *obj;
    size_t *counter;
};
template<class T>
SharedPointer<T>::SharedPointer(T *t): obj(t), counter(new size_t(1))
{
    std::cout << "call sharedptr's constructer: counter = " << *counter << std::endl;
}

// 拷贝构造，共享计数器和管理对象指针。
template<class T>
SharedPointer<T>::SharedPointer(const SharedPointer &ptr)
{
    counter = ptr.counter;
    obj = ptr.obj;
    *counter += 1;
    std::cout << "call sharedptr's copy constructer: counter = " << *counter << std::endl;
}
// 拷贝赋值，运算符左侧对象计数器自减1，右侧对象计数器自增1
// 如果左侧对象计数器为0，释放内存
template<class T>
SharedPointer<T>& SharedPointer<T>::operator= (const SharedPointer<T> &ptr)
{
    *ptr.counter += 1;
    *counter -= 1;
    if (counter == 0)
    {
        delete counter;
        delete obj;
    }
    obj = ptr.obj;
    counter = ptr.counter;
    std::cout << "call sharedptr's operator: counter = " << *counter << std::endl;
    return *this;
}
template<class T>
SharedPointer<T>::~SharedPointer()
{
    *counter -= 1;
    std::cout << "call sharedptr's desconstructer: counter = " << *counter << std::endl;
    if (*counter == 0)
    {
        delete counter;
        delete obj;
    }
}
