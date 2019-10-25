//
//  Audience.hpp
//  面向对象依赖倒置
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#ifndef Audience_hpp
#define Audience_hpp
#include <iostream>
#include <stdio.h>
#include "IMove.h"

class IMove;
class Audience {
public:
    Audience();
    ~Audience();
public:
    void watch(IMove *imove);
};
#endif /* Audience_hpp */
