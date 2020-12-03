//
// Created by taoyongji on 2020/12/1.
//

#include "half.h"

vector<int> Solution::searchRange(vector<int> &nums, int target) {
    vector<int> result;
    half(nums, 0, nums.size() - 1, target, result);

    if (result.size() == 0) {
        result.push_back(-1);
        result.push_back(-1);
    } else if (result.size() == 1) {
        result.push_back(result[0]);
    } else if (result.size() >= 2) {
        int min = result[0];
        int max = result[0];
        for (auto &i: result) {
            if (i > max) {
                max = i;
            }
            if (i < min) {
                min = i;
            }
        }
        result.clear();
        result.push_back(min);
        result.push_back(max);
    }

    return result;
}

void Solution::half(vector<int> &nums, int low, int high, int target, vector<int> &result) {
    if (low > high) return ;
    int mid = (low + high) / 2;
    if (nums[mid] == target) {
        result.push_back(mid);
    }
    half(nums, low, mid - 1, target, result);
    half(nums, mid + 1, high, target, result);
}

int main() {
    vector<int> nums = {3,3,3};
    Solution solution;
    vector<int> result = solution.searchRange(nums, 3);
    for (auto &i: result) {
        cout << i << endl;
    }
    return 0;
}