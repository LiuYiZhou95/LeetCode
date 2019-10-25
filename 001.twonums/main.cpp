//
//  main.cpp
//  001.twonums
//
//  Created by B612 on 2019/6/17.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;//这个也要写上才行


//
vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> as;//建立hash表存放数组元素
    vector<int> b(2,-1);//存放结果
    for(int i=0;i<nums.size();i++)
        as.insert(map<int,int>::value_type(nums[i],i));
    for(int i=0;i<nums.size();i++)
    {
        if(as.count(target-nums[i])>0&&(as[target-nums[i]]!=i))
            //判断是否找到目标元素且目标元素不能是本身
        {
            b[0]=i;
            b[1]=as[target-nums[i]];
            break;
        }
    }
    return b;
};



int main(int argc, const char * argv[]) {
    // insert code here...
    
    const int len = 5;
    int array[len] = {2,
        4,7,11,15};    //这是一个array
    
    vector<int> num(array,array+len);
    int target=9;
    
    vector <int>result=twoSum(num, target);
    
    std::cout << result[0]<<",";
    std::cout << result[1]<<"\n";
    return 0;
}
