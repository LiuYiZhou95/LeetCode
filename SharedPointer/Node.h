//
//  Node.hpp
//  SharedPointer
//
//  Created by B612 on 2019/8/12.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#pragma once

class Node  {
public:
    Node(int a);
    ~Node();
    int getValue();
private:
    int i;
};
