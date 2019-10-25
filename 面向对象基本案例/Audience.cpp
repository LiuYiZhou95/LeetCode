//
//  Audience.cpp
//  面向对象基本案例
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include "Audience.h"
#include <iostream>

Audience::Audience(){
    std::cout<<"来了一名观众"<<std::endl;
}
Audience::~Audience(){
    std::cout<<"观众离开了"<<std::endl;
}

void Audience::watch(Comedy *comedy){
    comedy->printContent();
}
