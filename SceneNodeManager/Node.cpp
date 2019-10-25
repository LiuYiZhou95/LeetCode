//
//  Node.cpp
//  SharedPointer
//
//  Created by action.zhou on 2019/8/12.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <stdio.h>
#include "Node.h"
#include "Scene.h"
#include <iostream>

using namespace std;
Node::Node(int i)
:i(i),
scene_(nullptr),
parent_(nullptr)
{
    
}
Node::~Node(){
    
}
int Node::getValue(){
    return i;
}

void Node::SetScene(Scene* scene)
{
    scene_ = scene;
}

void Node::addChild(Node* parent,Node* child)
{
    if (!child || child == this || child->parent_ == this)
        return;
    
    shared_ptr<Node> nodeShared(child);
    Node* oldParent = child->parent_;
    
    
    if (oldParent)
    {
        // If old parent is in different scene, perform the full removal
        if(this->GetScene()){
             child->SetScene(this->GetScene());
        }
        else{

        }
    }else{
        
    }
    
    vector <shared_ptr<Node>>::iterator theIterator = children_.begin();

    children_.insert(theIterator,nodeShared);
    if (scene_ && child->GetScene() != scene_)
        scene_->addNode(child);
    
    child->parent_ = this;
    
    
}

void Node::addChild(Scene* parent,Node* child)
{
    if (!child || child == this || child->GetScene() == this)
        return;
    child->SetScene(parent);

    vector <shared_ptr<Node>>::iterator theIterator = children_.begin();
    
    shared_ptr<Node> nodeShared(child);

    children_.insert(theIterator,nodeShared);
    if (scene_ && child->GetScene() != scene_)
        scene_->addNode(child);
    
    child->parent_ = this;
    
    
    for(int i=0;i<nodeShared->children_.size();++i){
        nodeShared->children_[i].get()->SetScene(parent);
        addChild(parent,nodeShared->children_[i].get());
    };
}


//--------------
//  remove的时候应该注意避免野指针
//--------------

void Node::removeChild(Node* parent,Node* child)
{
    if (!child || parent==child)
        return;
    
//    vector <shared_ptr<Node>>::iterator theIterator = find(children_.begin(),children_.end(),child);
//    theIterator=children_.erase(theIterator);
//    theIterator--;
    
    //迭代出当前指向child的node
    for (vector <shared_ptr<Node>>::iterator theIterator=children_.begin();theIterator!=children_.end();++theIterator) {

        if(theIterator->get()==child){
            removeChild(theIterator);
        }
    }
}

//通过迭代器下标remove Node
void Node::removeChild(vector <shared_ptr<Node>>::iterator i){
    shared_ptr<Node> child(*i);
    
    child->parent_=nullptr;
    //可以清空scene指向
    // child->scene_=nullptr;

    i=children_.erase(i);
    i--;
}
