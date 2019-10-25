//
//  Mobile.cpp
//  接口隔离原则
//
//  Created by B612 on 2019/10/16.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include "Mobile.h"
Mobile::Mobile(){}
Mobile::~Mobile(){}

void Mobile:: sendMessage(){
    std::cout<<"我在用Mobile发消息"<<std::endl;
}
void Mobile::listenMusic(){
    std::cout<<"我在用Mobile听音乐"<<std::endl;
}
void Mobile::write(){
    std::cout<<"我在用Mobile写东西"<<std::endl;
}
