//
// Created by taoyongji on 2020/2/22.
//

#include "candy.h"

vector<int> Solution::fairCandySwap(vector<int>& A, vector<int>& B) {
    vector<int> C;
    int sumA = 0, sumB = 0;
    unordered_set<int> setA(A.begin(), A.end());
    for (auto i: A) {
        sumA += i;
    }
    for (auto j: B) {
        sumB += j;
    }
    int diff = (sumA - sumB) / 2;
    for (auto y: B) {
        int x = y + diff;
        if (setA.count(x)) {
            C = vector<int>{x, y};
            break;
        }
    }

    return C;

}

int main() {
    vector<int> A, B;
    A.push_back(1);
    A.push_back(2);
    A.push_back(5);
    B.push_back(2);
    B.push_back(4);

    Solution so;
    vector<int> C = so.fairCandySwap(A, B);
    for (auto i: C) {
        cout << i << ",";
    }
}