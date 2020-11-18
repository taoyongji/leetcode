//
// Created by Administrator on 2020/11/18.
//

#include "gas.h"

int Solution::canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int index = -1; // 起始位置
    int gas_residue = 0; // 剩余油量
    int i = 0;
    int j = 0;
    int k = 0;
    while (true) {
        gas_residue += gas[i] - cost[i];
        if (gas_residue < 0) {
            gas_residue = 0;
            index = -1;
            j = 0;
            ++k;
            if (k == gas.size()) break;
        } else {
            if (index == -1) index = i;
            ++j;
            if (j == gas.size()) break;
        }
        ++i;
        if (i == gas.size()) i = 0;
    }

    return index;
}

int main() {

//    vector<int> gas = {2,3,4};
//    vector<int> cost = {3,4,3};

    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    Solution solution;
    int res = solution.canCompleteCircuit(gas, cost);
    std::cout << res << std::endl;
    return 0;
}