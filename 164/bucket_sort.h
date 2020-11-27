//
// Created by taoyongji on 2020/11/27.
//

#ifndef LEETCODE_BUCKET_SORT_H
#define LEETCODE_BUCKET_SORT_H
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class bucket_sort {
 public:
  void bucketSort(vector<int> &nums);
  int getMax(vector<int> &nums);
  int getMin(vector<int> &nums);
};


#endif //LEETCODE_BUCKET_SORT_H
