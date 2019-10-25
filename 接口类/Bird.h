//
//  Bird.hpp
//  接口类
//
//  Created by B612 on 2019/10/17.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#ifndef Bird_hpp
#define Bird_hpp

#include <stdio.h>
#include "IAction.h"
#include "IShape.h"

class Bird:public IShape,public IAction {
    
    
public:
    Bird();
    ~Bird();
public:
    void run ()override;
public:
    int area()override;
};
#endif /* Bird_hpp */
