//
//  main.cpp
//  SceneNodeManager
//
//  Created by action.zhou on 2019/8/14.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Scene.h"
#include "Node.h"
using namespace std;
int main(int argc, const char * argv[]) {
    
    Scene* scene=new Scene();
    std::cout << "这是：\n"<<scene<<std::endl;
    std::cout << "这是：\n"<<*&scene<<std::endl;

    
    Node* node =new Node(11);
    Node* childnode1 = new Node(111);
    Node* childnode2 = new Node(222);
    Node* childnode3 = new Node(333);
    Node* childnode4 = new Node(444);
    Scene a;
    a.addNode(node);
    
    scene->addChild(scene,node);
    
    node->addChild(node,childnode1);
    node->addChild(node,childnode2);
    node->addChild(node,childnode3);
    
    std::cout << "这是1：\n"<<scene->GetAllChildren()[0]<<std::endl;
    std::cout << "这是：\n"<<childnode1<<std::endl;
    
    std::cout << "这是：\n"<<node->GetAllChildren()[1].get()->getValue()<<std::endl;
    std::cout << "这是：\n"<<node->GetChild(1)->getValue()<<std::endl;

    node->removeChild(node,childnode2);
    node->removeChild(node,childnode3);

    

//    while (true) {
//    }
    return 0;
}
