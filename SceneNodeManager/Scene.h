//
//  Scene.hpp
//  SceneNodeManager
//
//  Created by action.zhou on 2019/8/14.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#pragma once

#include <stdio.h>
#include "Node.h"

class Scene :public Node  {

public:
    Scene();
    ~Scene();
    
    
    void addNode(Node* node);
    void removNode(Node* node);
    
private:
//    Node* node;
    
};
