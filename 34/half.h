//
// Created by taoyongji on 2020/12/1.
//

#ifndef LEETCODE_HALF_H
#define LEETCODE_HALF_H
#include <iostream>
#include <vector>
using namespace std;
class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target);
  void half(vector<int> &nums, int low, int high, int target, vector<int> &result);
};


#endif //LEETCODE_HALF_H
