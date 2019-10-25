//
//  ICommon.h
//  接口隔离原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
#ifndef _TEST_H_
#define _TEST_H_
class ICommon {
public:
    virtual void sendMessage()=0;
    virtual void listenMusic()=0;
};

#endif

