//
//  main.cpp
//  TemplateTest
//
//  Created by B612 on 2019/10/14.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;

#include "Stack.cpp"



int main(int argc, const char * argv[]) {
    
    
    try {
        Stack<int>         intStack;  // int 类型的栈
        Stack<string> stringStack;    // string 类型的栈
        
        // 操作 int 类型的栈
        intStack.push(7);
        std::cout << "Hello, World!\n";
        cout << intStack.top() <<endl;
        intStack.push(8);
        cout << intStack.top() <<endl;
        intStack.pop();
        cout << intStack.top() <<endl;;
        
        // 操作 string 类型的栈
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const& ex) {
        cerr << "Exception: " << ex.what() <<endl;
        return -1;
    }
    return 0;
}
