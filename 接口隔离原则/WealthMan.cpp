//
//  WealthMan.cpp
//  接口隔离原则
//
//  Created by B612 on 2019/10/16.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include "WealthMan.h"
#include "ICommon.h"
#include "ICommon1.h"
WealthMan:: WealthMan(){};
WealthMan::~WealthMan(){};
    
void WealthMan::sendMsg(ICommon *common){
        common->sendMessage();
    }

void WealthMan::listenMusic(ICommon *common){
    common->listenMusic();
}

void WealthMan::write(ICommon1 *common){
    common->write();
}
