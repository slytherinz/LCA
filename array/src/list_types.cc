//
// Created by cloudlz on 2019/2/3.
//
#include <stack>
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

/**
 * 给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。
 * @param head
 * @return
 */
ListNode* ListTypes::swapPairs(ListNode* head) {
    if (head == NULL)
        return NULL;
    //加一个头节点
    ListNode* newHead = new ListNode(0);
    newHead->next = head;
    ListNode* p = newHead;
    ListNode* left = p->next;
    ListNode* right = left->next;
    while (right != NULL) {
        ListNode* r = right->next;
        p->next = right;
        right->next = left;
        left->next = r;
        p = p->next->next;
        if (r != NULL) {
            left = r;
            right = left->next;
        } else {
            right = NULL;
        }
    }
    return newHead->next;
}

/**
 * 给出一个链表，每 k 个节点一组进行翻转，并返回翻转后的链表。
 * k 是一个正整数，它的值小于或等于链表的长度。如果节点总数不是 k 的整数倍，那么将最后剩余节点保持原有顺序。
 * @param head
 * @param k
 * @return
 */
ListNode* ListTypes::reverseKGroup(ListNode* head, int k) {
    if (head == NULL) {
        return NULL;
    }
    //加一个头节点
    ListNode* newHead = new ListNode(0);
    newHead->next = head;
    ListNode* p = head;
    ListNode* q = p;
    ListNode* newHead2 = newHead;
    int step = 1;
    bool end = false;
    while (q != NULL) {
        while(step < k) {
            q = q->next;
            if (q == NULL) {
                end = true;
                break;
            }
            step++;
        }
        if (q != NULL) {
            ListNode* r = q->next;
            //翻转p到q的部分
            while (p->next != r) {
                ListNode* first = newHead2->next;
                ListNode* toPre = p->next;
                ListNode* pTo = toPre->next;
                toPre->next = first;
                p->next = pTo;
                newHead2->next = toPre;
            }
            newHead2 = p;
            q = p->next;
            p = q;
            step = 1;
        }
    }
    return newHead->next;
}

/**
 * 给定一个链表，旋转链表，将链表每个节点向右移动 k 个位置，其中 k 是非负数。
 * @param head
 * @param k
 * @return
 */
ListNode* ListTypes::rotateRight(ListNode* head, int k) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    //加一个头节点
    ListNode* newHead = new ListNode(0);
    newHead->next = head;
    ListNode* numP = head;
    int num = 0;
    //先遍历一遍，算出长度
    while (numP != NULL) {
        numP = numP->next;
        num++;
    }
    //实际插入的次数是总次数除长度取余数
    int count = k % num;
    while (count > 0) {
        ListNode* p = newHead->next;
        while (p->next->next != NULL) {
            p = p->next;
        }
        ListNode* q = p->next;
        q->next = newHead->next;
        newHead->next = q;
        p->next = NULL;
        count--;
    }
    return newHead->next;
}

/**
 * 给定一个排序链表，删除所有含有重复数字的节点，只保留原始链表中 没有重复出现 的数字。
 * @param head
 * @return
 */
ListNode* ListTypes::deleteDuplicates(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    //加一个头节点
    ListNode* newHead = new ListNode(0);
    newHead->next = head;
    ListNode* prePoint = newHead;
    ListNode* p = prePoint->next;
    ListNode* q = p->next;
    while (q != NULL) {
        if (p->val == q->val) {
            //注意q不为空的判断
            while (q != NULL && p->val == q->val) {
                q = q->next;
            }
            //删除重复的节点
            prePoint->next = q;
            p = q;
            if (p != NULL) {
                q = p->next;
            } else {
                q = NULL;
            }
        } else {
            prePoint = prePoint->next;
            p = p->next;
            q = q->next;
        }
    }
    return newHead->next;
}

/**
 * 给定一个链表和一个特定值 x，对链表进行分隔，使得所有小于 x 的节点都在大于或等于 x 的节点之前。
 * 你应当保留两个分区中每个节点的初始相对位置。
 * @param head
 * @param x
 * @return
 */
ListNode* ListTypes::partition(ListNode* head, int x) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    //加一个头节点
    ListNode* l1 = new ListNode(0);
    l1->next = head;
    //分成两个链表，再合并
    ListNode* l2 = new ListNode(0);
    ListNode* p = l1->next;
    ListNode* q = l2;
    //没指向l1，1->1 x=0有问题
    ListNode* pre = l1;
    while (p != NULL) {
        if (p->val < x) {
            pre = p;
            p = p->next;
        } else {
//           （超时）
//            q->next = p;
//            pre->next = p->next;
//            q = q->next;
//            p = pre->next;
              ListNode* add = new ListNode(p->val);
              q->next = add;
              q = add;
              p = p->next;
              pre->next = p;
        }
    }
    pre->next = l2->next;
    return l1->next;
}

/**
 * 反转从位置 m 到 n 的链表。请使用一趟扫描完成反转。
 * @param head
 * @param m
 * @param n
 * @return
 */
ListNode* ListTypes::reverseBetween(ListNode* head, int m, int n) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    //加一个头节点
    ListNode* l1 = new ListNode(0);
    l1->next = head;
    int step = n-m;
    ListNode* pre = l1;
    //先移动到m位置
    int pos = m;
    while (pos > 1) {
        pre = pre->next;
        pos--;
    }
    ListNode* p = pre->next;
    ListNode* q = p->next;
    //判断q不为空
    if (q != NULL) {
        ListNode* r = q->next;
        while (step > 0) {
            q->next = pre->next;
            pre->next = q;
            p->next = r;
            step--;
            if (step > 0) {
                q = p->next;
                r = q->next;
            }
        }
    }
    return l1->next;
}

/**
 * 给定一个链表，判断链表中是否有环。
 * 为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
 * 如果 pos 是 -1，则在该链表中没有环。
 * @param head
 * @return
 */
bool ListTypes::hasCycle(ListNode *head) {
    if (head == NULL) {
        return false;
    }
    //如果是环两个不同step的指针肯定会遇到
    bool isCycle = false;
    ListNode* p = head;
    ListNode* q = head->next;
    while (p != NULL && q != NULL) {
        if (p == q) {
            isCycle = true;
            break;
        }
        p = p->next;
        q = q->next;
        if (q != NULL) {
            q = q->next;
        }
    }
    return isCycle;
}

/**
 * 给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
 * 为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
 * 如果 pos 是 -1，则在该链表中没有环。
 * 说明：不允许修改给定的链表。
 * @param head
 * @return
 */
ListNode* ListTypes::detectCycle(ListNode *head) {
    //超时
    if (head == NULL) {
        return head;
    }
    //如果是环两个不同step的指针肯定会遇到
    bool isCycle = false;
    ListNode* p = head;
    ListNode* q = head;
    while (p != NULL && q != NULL) {
        p = p->next;
        q = q->next;
        if (q != NULL) {
            q = q->next;
        } else {
            return NULL;
        }
        if (p == q) {
            isCycle = true;
            break;
        }
    }
//    int len = 1;
//    ListNode* res = head;
//    if (isCycle == false) {
//        return NULL;
//    } else {
//        q = q->next;
//        while (p != q) {
//            q = q->next;
//            len++;
//        }
//    }
//    //从头开始，如果是环的开始节点，循环len就会回到这个节点
//    ListNode* r = res;
//    for (int i = 0; i < len; i++) {
//        r = r->next;
//    }
//    while (r->next != r) {
//        res = res->next;
//        r = res;
//        for (int i = 0; i < len; i++) {
//            r = r->next;
//        }
//    }
//    return res;
    //慢指针和从头开始的指针相遇的地方为头节点
    if (isCycle) {
        ListNode* res = head;
        while (res != p) {
            res = res->next;
            p = p->next;
        }
        return res;
    } else {
        return NULL;
    }
}

/**
 * 给定一个单链表 L：L0→L1→…→Ln-1→Ln ，
 * 将其重新排列后变为： L0→Ln→L1→Ln-1→L2→Ln-2→…
 * @param head
 */
void ListTypes::reorderList(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return;
    }
    //从中间分两段，后半段反转后插入
    ListNode* p = head;
    ListNode* q = head->next;
    while (q != NULL && q->next != NULL) {
        p = p->next;
        q = q->next->next;
    }
    //翻转
    ListNode* head2 = p;
    ListNode* m = p->next;
    if (m->next != NULL) {
        ListNode* n = m->next;
        while (n != NULL) {
            m->next = n->next;
            n->next = head2->next;
            head2->next = n;
            n = m->next;
        }
    }
    //依次插入
    q = head;
    m = head2->next;
    //先拿到串2的头节点，再把串1尾节点置空，放在上两行有问题
    p->next = NULL;
    while (q != NULL) {
        ListNode* r = q->next;
        if (m != NULL) {
            q->next = m;
            m = m->next;
            q->next->next = r;
        }
        q = r;
    }
}

/**
 * 插入排序
 * @param head
 * @return
 */
ListNode* ListTypes::insertionSortList(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    //加一个头节点
    ListNode* l1 = new ListNode(0);
    l1->next = head;
    ListNode* pre = l1;
    ListNode* p = head;
    ListNode* q = p->next;
    while (p != NULL && q != NULL) {
        bool insert = false;
        pre = l1;
        ListNode* move = l1->next;
        while (move != p) {
            if (q->val < move->val) {
                p->next = q->next;
                q->next = move;
                pre->next = q;
                q = p->next;
                insert = true;
                break;
            } else {
                move = move->next;
                pre = pre->next;
            }
        }
        if (!insert) {
            //前面大于后面，插入
            if (p->val > q->val) {
                p->next = q->next;
                q->next = p;
                pre->next = q;
                q = p->next;
            } else {
                p = p->next;
                q = p->next;
            }
        }
    }
    return l1->next;
}

/**
 * 在 O(n log n) 时间复杂度和常数级空间复杂度下，对链表进行排序。
 * @param head
 * @return
 */
ListNode* ListTypes::sortList(ListNode* head) {
}

/**
 * 找到两个单链表相交的起始节点。
 * @param headA
 * @param headB
 * @return
 */
ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
}