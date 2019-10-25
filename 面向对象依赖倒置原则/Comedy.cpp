//
//  Comedy.cpp
//  面向对象依赖倒置
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include "Comedy.h"
#include <iostream>
Comedy::Comedy(){
    std::cout<<"创建一部喜剧片"<<std::endl;
}
Comedy::~Comedy(){
    std::cout<<"移除一部喜剧片"<<std::endl;
}
void Comedy::printContent(){
    std::cout<<"我在看一部喜剧片"<<std::endl;
}
