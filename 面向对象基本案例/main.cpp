//
//  main.cpp
//  面向对象基本案例
//
//  Created by B612 on 2019/10/18.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include "Audience.h"
#include "Comedy.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    Audience * audience=new Audience();
    Comedy* comedy=new  Comedy();
    audience->watch(comedy);
    return 0;
}
