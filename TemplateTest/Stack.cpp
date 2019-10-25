//
//  Stack.cpp
//  TemplateTest
//
//  Created by B612 on 2019/10/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include "Stack.h"

template <class T>
void Stack<T>::push(T const& elem)  {
    elems.push_back(elem);
    
};

template <class T>
void Stack<T>::pop() {
    if (elems.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    // 删除最后一个元素
    elems.pop_back();
};
template <class T>
T Stack<T>::top()const {
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // 返回最后一个元素的副本
    return elems.back();
};
