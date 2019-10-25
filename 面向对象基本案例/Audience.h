//
//  Audience.hpp
//  面向对象基本案例
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#ifndef Audience_hpp
#define Audience_hpp
#include <iostream>
#include <stdio.h>
#include "Comedy.h"

class Audience {
    
public:
    Audience();
    ~Audience();
public:
    void watch(Comedy *comedy);
};
#endif /* Audience_hpp */
