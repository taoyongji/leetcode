//
// Created by taoyongji on 2020/11/27.
//

#include "four_add.h"

int Solution::fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
    int cnt = 0;
    map<int, int> map;
    for (auto a: A) {
        for (auto b: B) {
            ++map[a + b];
        }
    }

    for (auto c: C) {
        for (auto d: D) {
            if (map.count(-c - d)) {
                cnt += map[-c - d];
            }
        }
    }
    return cnt;
}


int main() {
    vector<int> A = {-1, -1};
    vector<int> B = {-1, 1};
    vector<int> C = {-1, 1};
    vector<int> D = {1, -1};
    Solution solution;
    int cnt = solution.fourSumCount(A, B, C, D);
    cout << cnt << endl;
    return 0;
}