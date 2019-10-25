//
//  Gunfight.cpp
//  面向对象依赖倒置原则
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include "Gunfight.h"
#include <iostream>
Gunfight::Gunfight(){
    std::cout<<"创建一部枪战片"<<std::endl;
}
Gunfight::~Gunfight(){
    std::cout<<"移除一部枪战片"<<std::endl;
}
void Gunfight::printContent(){
    std::cout<<"我在看一部枪战片"<<std::endl;
}
