//
// Created by taoyongji on 2020/11/21.
//

#include "linked_sort.h"

ListNode *Solution::sortList(ListNode *head) {
    return sortList(head, nullptr);
}

ListNode *Solution::sortList(ListNode *head, ListNode *tail) {
    if (head == nullptr) return head;
    if (head->next == tail) {
        head->next = nullptr;
        return head;
    }
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != tail) {
        slow = slow->next;
        fast = fast->next;
        if (fast != tail) fast = fast->next;
    }
    ListNode *mid = slow;
    return merge(sortList(head, mid), sortList(mid, tail));
}

ListNode *Solution::merge(ListNode *head1, ListNode *head2) {
    auto *dummyHead = new ListNode(0);
    ListNode *temp = dummyHead;
    ListNode *temp1 = head1;
    ListNode *temp2 = head2;

    while (temp1 != nullptr && temp2 != nullptr) {
        if (temp1->val <= temp2->val) {
            temp->next = temp1;
            temp1 = temp1->next;
        } else {
            temp->next = temp2;
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    if (temp1 != nullptr) temp->next = temp1;
    if (temp2 != nullptr) temp->next = temp2;

    return dummyHead->next;
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
    ListNode *result = solution.sortList(node1);

    ListNode *head = result;
    while (head != nullptr) {
        cout << head->val << endl;
        head = head->next;
    }


    return 0;
}