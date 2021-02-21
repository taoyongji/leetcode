#include "sub_array.h"

int Solution::findShortestSubArray(vector<int> &nums) {

    map<int, int> cnt;
    int max_frequency = 0;    // 最大频率

    for (auto i: nums) {
        ++cnt[i];
        max_frequency = max(max_frequency, cnt[i]);
    }

    int num = 0;
    int frequency = 0;
    int res = nums.size();

    int start = 0;
    int end = 0;

    for (auto j: cnt) {
        num = j.first;
        frequency = j.second;

        if (frequency == max_frequency) {
            // 找出当前值的起始坐标和终点坐标
            for (int k = 0; k < nums.size(); ++k) {
                if (nums[k] == num) {
                    if (frequency == max_frequency) {
                        start = k;    // 起始  
                    }
                    --frequency;
                }
                if (frequency == 0) {
                    end = k;  // 终点
                    break;
                }
            }

            if (end -start + 1 < res) {
                res = end - start + 1;
            }
            
        }

    }

    return res;
}

int main() {
    Solution solution;
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);

    int res = solution.findShortestSubArray(nums);

    cout << res << endl;

    return 0;
}




