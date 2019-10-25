//
//  main.cpp
//  类的静态成员
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>

using namespace std;

class Box
{
public:
    static int objectCount;
    // 构造函数定义
    Box(double l=2.0, double b=2.0, double h=2.0)
    {
        cout <<"创建了一个BOX" << endl;
        length = l;
        breadth = b;
        height = h;
        // 每次创建对象时增加 1
        objectCount++;
    }
    double Volume()
    {
        return length * breadth * height;
    }
private:
    double length;     // 长度
    double breadth;    // 宽度
    double height;     // 高度
};

// 初始化类 Box 的静态成员
int Box::objectCount = 0;

int main(void)
{
    Box Box1(3.3, 1.2, 1.5);    // 声明 box1
    Box Box2(8.5, 6.0, 2.0);    // 声明 box2
    
    // 输出对象的总数
    cout << "目前总共的BOX数量: " << Box::objectCount << endl;
    
    return 0;
}
