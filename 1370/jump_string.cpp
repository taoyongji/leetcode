//
// Created by taoyongji on 2020/11/25.
//

#include "jump_string.h"

string Solution::sortString(string s) {
    int len = s.length();
    if (len == 1) return s;
    int *bucket = new int[26]{0};
    string result = "";
    for (char c : s) {
        ++bucket[c - 'a'];
    }
    while (true) {
        for (int i = 0; i < 26; ++i) {
            if (bucket[i] != 0) {
                result += (i + 'a');
                --bucket[i];
            }
        }
        for (int j = 25; j >= 0; --j) {
            if (bucket[j] != 0) {
                result += (j + 'a');
                --bucket[j];
            }
        }
        if (result.length() == len) break;
    }
    return result;
}


int main() {

    string s = "aaabbbccc";

    Solution solution;
    string result = solution.sortString(s);

    cout << result << endl;

    return 0;
}