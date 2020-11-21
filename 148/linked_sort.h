//
// Created by tyj on 2020/11/21.
//

#ifndef LEETCODE_LINKED_SORT_H
#define LEETCODE_LINKED_SORT_H
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *sortList(ListNode* head);
    ListNode *sortList(ListNode* head, ListNode *tail);
    ListNode *merge(ListNode *head1, ListNode *head2);
};


#endif //LEETCODE_LINKED_SORT_H
