//
//  main.cpp
//  接口类
//
//  Created by B612 on 2019/10/17.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include "Bird.h"

void doRun(IAction *object)
{
    object->run();
}

void getArea(IShape *object)
{
    object->area();
}

int main()
{
    Bird *bird = new Bird();
    doRun(bird);
    getArea(bird);
    delete bird;
    return 0;
}
