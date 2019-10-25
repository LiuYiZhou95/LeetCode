//
//  main.cpp
//  148.sortList
//
//  Created by B612 on 2019/6/19.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;//这个也要写上才行

struct ListNode {
         int val;
         ListNode *next;
//         ListNode(int x) : val(x), next(NULL) {}
    
};


int main(int argc, const char * argv[]) {
    
//    ListNode* head=new ListNode;
//    head->val=0;
//    head->next=NULL;
    int n=2;
    if(((n & (n - 1)) == 0)){
        std::cout << "aaa";
//        return true;
    } else {
//        return false;
        std::cout << "sss";
    }
    
    

}
//
//ListNode* cut(ListNode* head, int n) {
//    auto p = head;
//    while (--n && p) {
//        p = p->next;
//    }
//
//    if (!p) return nullptr;
//
//    auto next = p->next;
//    p->next = nullptr;
//    return next;
//}
