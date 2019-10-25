//
//  IShape.hpp
//  接口类
//
//  Created by B612 on 2019/10/17.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#ifndef IShape_hpp
#define IShape_hpp

#include <stdio.h>

class IShape {
    
    
public:
    virtual int area()=0;
    static const int MIN_AREA;
};

#endif /* IShape_hpp */
