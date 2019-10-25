//
//  Reader.h
//  依赖倒置原则
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
#include "IReadContent.h"
class Reader
{
public:
    void read(IReadContent& readContent)
    {
        std::cout<< readContent.GetContent() << std::endl;
    }
};
