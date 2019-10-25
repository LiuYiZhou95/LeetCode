//
//  WealthMan.h
//  接口隔离原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
class ICommon;
class ICommon1;
class WealthMan {
public:
    WealthMan();
    ~WealthMan();
public:
    void sendMsg(ICommon *common);
    void listenMusic(ICommon *common);
    void write(ICommon1 *common);
};

