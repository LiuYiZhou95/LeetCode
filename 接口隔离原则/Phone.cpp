//
//  Phone.cpp
//  接口隔离原则
//
//  Created by B612 on 2019/10/16.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include "Phone.h"

Phone::Phone(){}
Phone::~Phone(){}
void Phone:: sendMessage(){
    std::cout<<"我在用Phone发消息"<<std::endl;
}
void Phone::listenMusic(){
    std::cout<<"我在用Phone听音乐"<<std::endl;
}
void Phone::calling(){
    std::cout<<"我在用Phone打电话"<<std::endl;
}
