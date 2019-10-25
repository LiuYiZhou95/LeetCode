//
//  Comedy.hpp
//  面向对象依赖倒置
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#ifndef Comedy_hpp
#define Comedy_hpp

#include <stdio.h>
#include "IMove.h"
class Comedy:public IMove {
public:
    Comedy();
    ~Comedy();
public:
    void printContent ()override;
};
#endif /* Comedy_hpp */
