//
//  main.cpp
//  继承
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
/*
 多继承
 */
#include <iostream>

using namespace std;

// 基类 Shape
class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};

// 基类 PaintCost
class PaintCost
{
public:
    int getCost(int area)
    {
        return area * 70;
    }
};

// 派生类
class Rectangle: public Shape, public PaintCost
{
public:
    int getArea()
    {
        return (width * height);
    }
};

int main(void)
{
    Rectangle Rect;
    int area;
    
    Rect.setWidth(5);
    Rect.setHeight(7);
    
    area = Rect.getArea();
    
    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;
    
    // 输出总花费
    cout << "Total paint cost: $" << Rect.getCost(area) << endl;
    
    return 0;
}
