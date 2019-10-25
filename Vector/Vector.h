//
//  Vector.h
//  Vector
//
//  Created by B612 on 2019/8/12.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
#pragma once
#include<iostream>
#include<cstring>
//清空元素
#define SafeDelete(_x)     { if (_x) { delete (_x); (_x) = NULL; } }
#define SafeDeleteArray(_x)    { if (_x) { delete [] (_x); (_x) = NULL; } }

using namespace std;
template <class T>
class Vector
{
public:
    //无参初始化
    Vector();
    //有参初始化
    Vector(unsigned size, const T& data);
    //拷贝构造函数
    Vector(const Vector<T>& v);
    //析构，释放唯一的指针
    ~Vector();
    //清空vector
    void clear(){
        SafeDeleteArray(this->p);
        this->size=0;
        this->capacity=10;
        this->p=new T[this->capacity];
        for (unsigned i=0;i<this->capacity;++i)
        {
            this->p[i]=NULL;
        }
    };
    //获得下标为i的对象
    T get(unsigned i){
        if (i>=this->size)
        {
            return NULL;
        }
        return this->p[i];
    };
    
//    //插入一个元素到最后
//    void insert(T element){
//        if (this->size>=this->capacity)
//        {
//            unsigned i;
//            T* dataTemp=new T[this->capacity*2];
//            for (i=0;i<this->capacity;i++)
//            {
//                dataTemp[i]=this->data[i];
//            }
//            this->capacity=this->capacity*2;
//            for (;i<this->capacity;i++)
//            {
//                dataTemp[i]=NULL;
//            }
//            SafeDeleteArray(this->data);
//            this->data=dataTemp;
//        }
//        this->data[this->length]=element;
//        this->length++;
//    };
    
    unsigned getCapacity(){
        return this->capacity;
    };
    unsigned getSize(){
        return this->size;
    };
private:
    T *p;
    unsigned capacity;
    unsigned size;
};
template<class T>
Vector<T>::Vector():p(NULL),capacity(0),size(0)
{
    
}

template<class T>
Vector<T>::Vector(unsigned size, const T& data){
    this->capacity=20+size;
    this->size=size;
    this->p=new T[capacity];
    for(int i=0;i<this->size;++i){
        this->p[i] = data;
    }
}
template<class T>
Vector<T>::Vector(const Vector<T>& v){
    this->size=v.size;
    this->capacity=v.capacity;
    this->p=new T[this->capacity];
    for (unsigned i=0;i<this->capacity;++i)
    {
        this->p[i]=v.p[i];
    }
}

template<class T>
Vector<T>::~Vector()
{
    this->capacity=0;
    this->size=0;
    SafeDeleteArray(this->p);
    
}
