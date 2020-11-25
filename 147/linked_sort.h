//
// Created by taoyongji on 2020/11/20.
//

#ifndef LEETCODE_LINKED_SORT_H
#define LEETCODE_LINKED_SORT_H
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
 public:
  ListNode* insertionSortList(ListNode* head);
};


#endif //LEETCODE_LINKED_SORT_H
