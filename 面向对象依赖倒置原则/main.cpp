//
//  main.cpp
//  面向对象依赖倒置
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include "Audience.h"
#include "IMove.h"
#include "Comedy.h"
#include "Gunfight.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout<<"面向对象依赖倒置"<<std::endl;
    Audience * audience=new Audience();
    Comedy* comedy=new  Comedy();
    audience->watch(comedy);
    Gunfight *gunfight=new Gunfight();
    audience->watch(gunfight);
    return 0;
}
