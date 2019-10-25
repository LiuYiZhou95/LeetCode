//
//  PoorMan.h
//  接口隔离原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//


class ICommon;
class ICommon2;
class PoorMan {
public:
    PoorMan();
    ~PoorMan();
public:
    void sendMsg(ICommon *common);
    void listenMusic(ICommon *common);
    void calling(ICommon2 *common);
};
