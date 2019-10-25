//
//  main.cpp
//  ReverseVector
//
//  Created by B612 on 2019/7/3.
//  Copyright © 2019年 action.zhou. All rights reserved.
//
#include <iostream>
#include <vector>
using namespace std;
void func(){
    int arry[] = {1,6,3,4,5};
    vector<int> v(arry,arry+sizeof(arry)/sizeof(arry[0]));
    //正向迭代器
    for(vector<int>::iterator it = v.begin();it != v.end();it++){
        cout<<*it<<" ";
    }
    //反向迭代器
    for(vector<int>::reverse_iterator it = v.rbegin();it != v.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main() {
    func();
    return 0;
}
