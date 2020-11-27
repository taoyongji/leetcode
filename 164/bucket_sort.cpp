//
// Created by taoyongji on 2020/11/27.
//
/**
 * 桶排序
 *
 * 桶的长度 = (max - min) / (len - 1)
 * 桶的数量 = ( (max - min) / 桶的长度  ) + 1
 * 对应的桶 location = (nums[i] - min) / 桶长
 */

#include "bucket_sort.h"

void bucket_sort::bucketSort(vector<int> &nums) {
    int min = getMin(nums);
    int max = getMax(nums);
    int len = nums.size();
    int bucket_len = (max - min) / (len - 1);
    int bucket_num = ((max - min) / bucket_len) + 1;
    // 初始化桶
    map<int, vector<int>> bucket;
    for (int i = 0; i < bucket_num; ++i) {
        bucket[i];
    }

    // 将每个元素放入对应的桶中
    for (auto num: nums) {
        int location = (num - min) / bucket_len;
        bucket[location].push_back(num);
    }

    // 对每一个桶进行排序
    for (auto &ptr: bucket) {
        vector<int> list = ptr.second;
        sort(list.begin(), list.end());
    }

    // 进行还原
    vector<int> res;

    for (auto &ptr: bucket) {
        for (auto value: ptr.second) {
            res.push_back(value);
        }
    }

    // 输出
    for (auto &value: res) {
        cout << value << "," ;
    }

}

int bucket_sort::getMin(vector<int> &nums) {
    int min = nums[0];
    for (auto a: nums) {
        if (a < min) {
            min = a;
        }
    }
    return min;
}

int bucket_sort::getMax(vector<int> &nums) {
    int max = nums[0];
    for (auto b: nums) {
        if (b > max) {
            max = b;
        }
    }
    return max;
}

int main() {
    vector<int> nums = {1, 3, 4, 1, 5, 6, 7};
    bucket_sort bucketSort;
    bucketSort.bucketSort(nums);
    return 0;
}