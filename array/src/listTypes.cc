//
// Created by cloudlz on 2019/2/3.
//
#include "listTypes.h"

ListNode* ListTypes::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* sum;
    int carry = 0;
    while(l1->next != NULL && l2->next != NULL) {
        int addVal = l1->val + l2->val + carry;
        if (addVal > 10) {
            carry = 1;
        }
        insertNode(sum, addVal % 10);
        l1->next = l1;
        l2->next = l2;
    }
    if(l1->next != NULL) {
        sum->next = l1->next;
    } else if (l2->next != NULL) {
        sum->next = l2->next;
    }
    return sum;
}
