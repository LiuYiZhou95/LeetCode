//
//  Scene.cpp
//  SceneNodeManager
//
//  Created by action.zhou on 2019/8/14.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include "Scene.h"
#include <vector>
using namespace std;
Scene::Scene():
Node(1)
{
    addNode(this);
}

Scene::~Scene(){
    
}

void Scene::addNode(Node *node){
    if (!node || node->GetScene()==this)
        return;
    
    //首先将节点的父节点移除
    Scene* oldScene=node->GetScene();
    if (oldScene) {
        oldScene->removNode(node);
    }
    node->SetScene(this);
    
}

void Scene::removNode(Node* node){
    if (!node || node->GetScene() != this)
        return;
    
}
