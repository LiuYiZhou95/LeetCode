//
//  main.cpp
//  uniquePtr
//
//  Created by B612 on 2019/9/30.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include <memory>


using namespace std;

class TEST
{
public:
    TEST(const string & name):_name(name){cout<<"TEST:"<<_name<<endl;}
    TEST(const TEST & another){
        _name = another._name;
        cout<<another._name<<" copyStruct "<<_name<<endl;
    }
    TEST & operator =(const TEST & another){
        if(&another==this){
            return *this;
        }
        this->_name=another._name;
        cout<<another._name<<" copyAssin to "<<_name<<endl;
         return *this;
    }
    ~TEST(){
        cout<<"~TEST:"<<_name<<endl;
    }
    
    //private:
    string _name;
};

//其他操作
int main()
{
    TEST* test=new TEST("case_1");
    TEST* test2=new TEST("case_2");
    unique_ptr<TEST> p1(test);
    cout<<"--"<<p1.get()<<endl;

    unique_ptr<TEST> p2(p1.release());          //!将所有权从p1转移到p2,p1现在指向NULL。
    cout<<"--"<<p2.get()<<endl;
    cout<<"++++++++++++++++++++++++"<<endl;
    unique_ptr<TEST> p3(test2);
    p2.reset(p3.release());                     //!p2释放了原来指向的内存，接受了p3指向的内存。
    cout<<"--"<<p2.get()<<endl;
    p2.reset();
    cout<<"--"<<p2.get()<<endl;
    getchar();
}

////!例外：
////①返回一个即将被销毁的uniptr
//unique_ptr<TEST> retDying(string param)
//{
//    return unique_ptr<TEST>(new TEST(param));
//}
//
////②返回一个局部对象；
//unique_ptr<TEST> retTemp(string param)
//{
//    unique_ptr<TEST> pTemp(new TEST(param));
//    return pTemp;
//}
//
//int main()
//{
//    unique_ptr<TEST>ret1 = retDying("dying");
//    cout<<(*ret1)._name<<endl;
//    unique_ptr<TEST>ret2 = retTemp("temp");
//    cout<<(*ret2)._name<<endl;
//    getchar();
//}
