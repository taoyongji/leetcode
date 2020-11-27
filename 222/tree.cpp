//
// Created by taoyongji on 2020/11/24.
//

#include "tree.h"

void perTraversal(TreeNode *node) {
    if (node != nullptr) {
        cout << node->val;
        perTraversal(node->left);
        perTraversal(node->right);
    }
}

void midTraversal(TreeNode *node) {
    if (node != nullptr) {
        perTraversal(node->left);
        cout << node->val;
        perTraversal(node->right);
    }
}

void postTraversal(TreeNode *node) {
    if (node != nullptr) {
        perTraversal(node->left);
        perTraversal(node->right);
        cout << node->val;
    }
}

int main() {

    auto *node1 = new TreeNode(1);
    auto *node2 = new TreeNode(2);
    auto *node3 = new TreeNode(3);
    auto *node4 = new TreeNode(4);
    auto *node5 = new TreeNode(5);
    auto *node6 = new TreeNode(6);
    auto *node7 = new TreeNode(7);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;
    node3->right = node7;

    cout << "先序:";
    perTraversal(node1);
    cout << endl;

    cout << "中序:";
    midTraversal(node1);
    cout << endl;

    cout << "后序:";
    postTraversal(node1);
    cout << endl << "end";

    return 0;
}