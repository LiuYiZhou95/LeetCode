//
//  IMove.h
//  LeetCode
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#ifndef IMove_h
#define IMove_h
class IMove
{
public:
    IMove(){}
    virtual ~IMove(){}      //析构函数定义为virtual类型，保证派生类继承后析构时析构完全
public:
    virtual void  printContent()= 0;   //
    
};

#endif /* IMove_h */
