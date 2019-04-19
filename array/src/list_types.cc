//
// Created by cloudlz on 2019/2/3.
//
#include "list_types.h"

/**
 * 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 * @param l1
 * @param l2
 * @return
 */
ListNode* ListTypes::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* sum = new ListNode(0);
    ListNode* head = sum;
    int carry = 0;
    while(l1 != NULL && l2 != NULL) {
        int addVal = l1->val + l2->val + carry;
        if (addVal >= 10) {
            carry = 1;
        } else {
            carry = 0;
        }
        insertNode(sum, addVal % 10);
        l1 = l1->next;
        l2 = l2->next;
        sum = sum->next;
    }
    //l1不为空
    if(l1 != NULL) {
        while(l1 != NULL) {
            int addVal = l1->val + carry;
            if (addVal >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
            insertNode(sum, addVal % 10);
            l1 = l1->next;
            sum = sum->next;
        }
    } else if (l2 != NULL) {
        while(l2 != NULL) {
            int addVal = l2->val + carry;
            if (addVal >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
            insertNode(sum, addVal % 10);
            l2 = l2->next;
            sum = sum->next;
        }
    }
    if (carry == 1) {
        insertNode(sum, carry);
    }
    return head->next;
}

/**
 * 给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。
 * 扫描一遍实现：两个指针，相差n-1
 * @param head
 * @param n
 * @return
 */
ListNode* ListTypes::removeNthFromEnd(ListNode *head, int n) {
    ListNode* p = head;
    for (int i = 0; i < n; i++) {
        p = p->next;
    }
    ListNode* q = head;
    while (p->next != NULL) {
        p = p->next;
        q = q->next;
    }
    q->next = q->next->next;
    return head;
}

/**
 *将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
 * @param l1
 * @param l2
 * @return
 */
ListNode* ListTypes::mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode* p = l1;
    ListNode* q = l2;
    ListNode* l3 = new ListNode(0);
    ListNode* r = l3;
    while (p != NULL && q != NULL) {
        if (p->val <= q->val) {
            r->next = p;
            p = p->next;
        } else {
            r->next = q;
            q = q->next;
        }
        r = r->next;
    }
    if (p == NULL && q != NULL) {
        r->next = q;
    } else if (p != NULL && q == NULL) {
        r->next = p;
    }
    return l3->next;
}

/**
 * 合并 k 个排序链表，返回合并后的排序链表。请分析和描述算法的复杂度。
 * @param lists
 * @return
 */
ListNode* ListTypes::mergeKLists(vector<ListNode*>& lists) {
    //空的情况
    if (lists.size() == 0) {
        return NULL;
    }
    int i=1;
    ListNode* p = lists[0];
    while (i < lists.size()){
        p = mergeTwoLists(p, lists[i]);
        i++;
    }
    return p;
}

/**
 * 合并 k 个排序链表，返回合并后的排序链表。请分析和描述算法的复杂度。
 * 递归，分左右两部分分别排序
 * @param lists
 * @return
 */
ListNode* ListTypes::mergeKLists2(vector<ListNode*>& lists) {
    if (lists.size() == 0) {
        return NULL;
    }
    if (lists.size() == 1) {
        return lists[0];
    }
    return mergeLists(lists, 0, lists.size()-1);
}

ListNode* ListTypes::mergeLists(vector<ListNode*>& lists, int start, int end) {
    if (start == end) {
        return lists[start];
    }
    int mid = start + (end - start)/2;
    ListNode* left = mergeLists(lists, start, mid);
    ListNode* right = mergeLists(lists, mid+1, end);
    return mergeTwoLists(left, right);
}