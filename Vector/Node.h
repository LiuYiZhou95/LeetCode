//
//  Node.hpp
//  SharedPointer
//
//  Created by B612 on 2019/8/12.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#pragma once
using namespace std;
class Node  {
public:
    Node(){};
    Node(int a);
    ~Node();
    int getValue();
private:
    int i;
};
