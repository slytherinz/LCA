//
// Created by cloudlz on 2019/2/3.
//
#include "listTypes.h"

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
