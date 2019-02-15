//
// Created by cloudlz on 2019/2/3.
//

#ifndef LCA_LISTTYPES_H
#define LCA_LISTTYPES_H

#include <cstdlib>
#include <vector>
/**
 * Definition for singly-linked list.
 */
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class ListTypes {
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    //p节点后插入值为i的节点
    static void insertNode(ListNode *p, int i){
        ListNode* node = new ListNode(i);
        node->next = p->next;
        p->next = node;
    }
    static void insertNode(ListNode *p, std::vector<int> insertList){
        std::vector<int>::iterator iter;
        for(iter = insertList.begin(); iter < insertList.end(); iter++) {
            ListNode* node = new ListNode(*iter);
            node->next = p->next;
            p->next = node;
        }
    }
};

#endif //LCA_LISTTYPES_H
