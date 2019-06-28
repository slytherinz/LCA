//
// Created by cloudlz on 2019/2/3.
//

#ifndef LCA_LISTTYPES_H
#define LCA_LISTTYPES_H

#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;
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
    //2. 两数相加
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

    //19. 删除链表的倒数第N个节点
    static ListNode* removeNthFromEnd(ListNode* head, int n);

    //21. 合并两个有序链表
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);

    //23. 合并K个排序链表
    ListNode* mergeKLists(vector<ListNode*>& lists);

    //23. 合并K个排序链表2（递归）
    ListNode* mergeKLists2(vector<ListNode*>& lists);
    ListNode* mergeLists(vector<ListNode*>& lists, int start, int end);

    //24. 两两交换链表中的节点
    ListNode* swapPairs(ListNode* head);

    //25. k个一组翻转链表
    ListNode* reverseKGroup(ListNode* head, int k);

    //61. 旋转链表
    ListNode* rotateRight(ListNode* head, int k);

    //82. 删除排序链表中的重复元素 II
    ListNode* deleteDuplicates(ListNode* head);

    //86. 分隔链表
    ListNode* partition(ListNode* head, int x);

    //92. 反转链表 II
    ListNode* reverseBetween(ListNode* head, int m, int n);

    //141. 环形链表
    bool hasCycle(ListNode *head);

    //142. 环形链表 II
    ListNode* detectCycle(ListNode *head);

    //143. 重排链表
    void reorderList(ListNode* head);

    //147. 对链表进行插入排序
    ListNode* insertionSortList(ListNode* head);

    //148. 排序链表
    ListNode* sortList(ListNode* head);

    //160. 相交链表
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);

    //p节点后插入值为i的节点
    static void insertNode(ListNode *p, int i){
        ListNode* node = new ListNode(i);
        node->next = p->next;
        p->next = node;
    }
    static ListNode* insertNode(ListNode *head, std::vector<int> insertList){
        ListNode* p = head;
        std::vector<int>::iterator iter;
        for(iter = insertList.begin(); iter < insertList.end(); iter++) {
            ListNode* node = new ListNode(*iter);
            node->next = p->next;
            p->next = node;
            p = p->next;
        }
        p = head;
        while (p != NULL) {
            std::cout << p->val << std::endl;
            p = p->next;
        }
        return head;
    }
};

#endif //LCA_LISTTYPES_H
