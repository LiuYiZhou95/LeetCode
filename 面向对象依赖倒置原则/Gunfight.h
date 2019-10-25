//
//  Gunfight.hpp
//  面向对象依赖倒置原则
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#ifndef Gunfight_hpp
#define Gunfight_hpp
#include "IMove.h"
#include <stdio.h>
class Gunfight:public IMove {
public:
    Gunfight();
    ~Gunfight();
public:
    void printContent()override;
};
#endif /* Gunfight_hpp */
