//
// Created by taoyongji on 2020/11/24.
//

#ifndef LEETCODE_TREE_H
#define LEETCODE_TREE_H
#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    explicit TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

#endif //LEETCODE_TREE_H
