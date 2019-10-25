//
//  Node.hpp
//  SharedPointer
//
//  Created by action.zhou on 2019/8/12.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#pragma once
using namespace std;
#include <vector>
class Scene;
class Node;
class Node  {
public:
    Node(int a);
    ~Node();
    int getValue();
    Scene* GetScene() const { return scene_; }
    void SetScene(Scene* scene);
    
    //获取children vector
    vector<shared_ptr<Node>>& GetAllChildren()  { return children_; }
    //根据下标获取childnode
    Node* GetChild(int i)  { return children_[i].get(); }
    
    //添加子节点
    void addChild(Node* parent,Node* child);
    void addChild(Scene* scene,Node* child);
    
    void removeChild(Node* parent,Node* child);
//    void removeChild(Scene* scene,Node* child);
    void removeChild(vector <shared_ptr<Node>>::iterator i);
private:
    int i;
    Node* parent_;
    Scene* scene_;    
    vector<shared_ptr<Node>> children_;
};
