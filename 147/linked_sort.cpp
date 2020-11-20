//
// Created by Administrator on 2020/11/20.
//

#include "linked_sort.h"

ListNode *Solution::insertionSortList(ListNode *head) {
    if (head == nullptr) return head;
    auto *new_head = new ListNode(head->val);
    ListNode *old_head = head->next;
    while (old_head != nullptr) {
        auto *node = new ListNode(old_head->val);
        ListNode *p = new_head;
        while (p != nullptr) {
            if (node->val <= p->val) {
                node->next = p;
                new_head = node;
                break;
            }
            if (p->next == nullptr && node->val >= p->val) {
                p->next = node;
                break;
            }
            if (p->next != nullptr && node->val > p->val && node->val <= p->next->val) {
                node->next = p->next;
                p->next = node;
                break;
            }
            p = p->next;
        }
        old_head = old_head->next;
    }
    return new_head;
}


int main() {

//    [4,19,14,5,-3,1,8,5,11,15]
    auto *node1 = new ListNode(4);
    auto *node2 = new ListNode(19);
    auto *node3 = new ListNode(14);
    auto *node4 = new ListNode(5);
    auto *node5 = new ListNode(-3);
    auto *node6 = new ListNode(1);
    auto *node7 = new ListNode(8);
    auto *node8 = new ListNode(5);
    auto *node9 = new ListNode(11);
    auto *node10 = new ListNode(15);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;


    Solution solution;
    ListNode *result = solution.insertionSortList(node1);

    ListNode *head = result;
    while (head != nullptr) {
        cout << head->val << endl;
        head = head->next;
    }



    return 0;
}