//
//  main.cpp
//  Vector
//
//  Created by B612 on 2019/8/12.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include "Node.h"
#include "SharedPointer.h"
//#include <vector>
#include "Vector.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Node* node=new Node(100);
    SharedPointer<Node> ptr(node);

    Vector<Node> childern_(10,*node);
//    childern_.add(node);
    std::cout << "vector 的大小为："<<childern_.getSize()<<std::endl;
//    childern_.push_back(ptr);
//    std::cout << "vector 的大小为："<<childern_.size()<<std::endl;
    
    while (true) {
    }
    return 0;
}
