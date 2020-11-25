//
// Created by taoyongji on 2020/11/19.
//

#include "move.h"

// 第二版本
void Solution::moveZeroes(vector<int> &nums) {
    int index = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) nums[index++] = nums[i];
    }
    for (int i = index; i < nums.size(); ++i) {
        nums[i] = 0;
    }

    // 测试
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << "," << endl;
    }
}

// 第一个版本
//void Solution::moveZeroes(vector<int> &nums) {
//
//    for (int i = 0; i < nums.size(); ++i) {
//        for (int j = i + 1; j < nums.size(); ++j) {
//            if (nums[j] == 0) continue;
//            if (nums[i] == 0) {
//                int temp = nums[j];
//                nums[j] = nums[i];
//                nums[i] = temp;
//            }
//        }
//    }
//
//    for (int i = 0; i < nums.size(); ++i) {
//        cout << nums[i] << "," << endl;
//    }
//
//
//}

int main() {
    vector<int> nums = {0,1,0,3,12};
    Solution solution;
    solution.moveZeroes(nums);
    return 0;
}