//
//  PoorMan.cpp
//  接口隔离原则
//
//  Created by B612 on 2019/10/16.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <stdio.h>
#include "PoorMan.h"
#include "ICommon.h"
#include "ICommon2.h"

PoorMan:: PoorMan(){};
PoorMan::~PoorMan(){};

void PoorMan::sendMsg(ICommon *common){
    common->sendMessage();
}

void PoorMan::listenMusic(ICommon *common){
    common->listenMusic();
}
void PoorMan::calling(ICommon2 *common){
    common->calling();
}
