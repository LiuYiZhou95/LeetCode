//
//  Node.cpp
//  SharedPointer
//
//  Created by B612 on 2019/8/12.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <stdio.h>
#include "Node.h"

Node::Node(int i):i(i){
    
}
Node::~Node(){
    
}
int Node::getValue(){
    return i;
}
