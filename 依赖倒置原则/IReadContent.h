//
//  Header.h
//  依赖倒置原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

class IReadContent
{
public:
    IReadContent(){}
    virtual ~IReadContent(){}      //析构函数定义为virtual类型，保证派生类继承后析构时析构完全
public:
    virtual const std::string GetContent() const = 0;   //获取读物的具体内容
    
};

