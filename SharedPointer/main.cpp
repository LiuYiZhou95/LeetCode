//
//  main.cpp
//  SharedPointer
//
//  Created by B612 on 2019/8/9.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
#include <iostream>
#include "Node.h"
#include "SharedPointer.h"

class Node;
void testptr(Node* ptr){
    SharedPointer<Node> an(ptr);
//    SharedPtr<int>p1(new int(1));
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Node* node =new Node(10);
    std::cout<<"新建节点Node值为："<<node->getValue()<<std::endl;
    
    
    testptr(node);
    
    return 0;
    
}


