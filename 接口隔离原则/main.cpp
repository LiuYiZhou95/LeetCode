//
//  main.cpp
//  接口隔离原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include "WealthMan.h"
#include "PoorMan.h"
#include "Mobile.h"
#include "Phone.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    WealthMan* w=new WealthMan();
    PoorMan* p=new PoorMan();
    Mobile* m=new Mobile();
    Phone* ph=new Phone();
    
    w->sendMsg(m);
    w->listenMusic(m);
    w->write(m);
    
    w->sendMsg(ph);
    w->listenMusic(ph);
    
    p->listenMusic(m);
    p->sendMsg(m);
    
    p->listenMusic(ph);
    p->sendMsg(ph);
    p->calling(ph);
    std::cout << "Hello, World!\n";
    return 0;
}
