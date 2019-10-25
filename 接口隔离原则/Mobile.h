//
//  Mobile.h
//  接口隔离原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
#include "ICommon1.h"
#include "ICommon.h"
class Mobile:public ICommon,public ICommon1  {

public:
    Mobile();
    ~Mobile();
public:
    void sendMessage()override;
    void listenMusic()override;
public:
     void write()override;
   
};
