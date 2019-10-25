//
//  Stack.hpp
//  TemplateTest
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//



#include <stdio.h>
#include <vector>
using namespace std;
template <class  T>
class Stack {
private:
    vector<T> elems;
    
public:
    void push(T const& elem);
    void pop();
    T top() const;
    bool empty()const{
        return elems.empty();
    }
};

