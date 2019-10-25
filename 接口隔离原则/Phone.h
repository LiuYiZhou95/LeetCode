//
//  Phone.h
//  接口隔离原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
#include "ICommon2.h"
#include "ICommon.h"
class Phone:public ICommon,public ICommon2  {
    
public:
    Phone();
    ~Phone();
public:
     void sendMessage()override;
     void listenMusic()override;
public:
     void calling()override;
    
};
