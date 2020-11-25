//
// Created by taoyongji on 2020/11/23.
//

#include "shoot.h"

int Solution::findMinArrowShots(vector<vector<int>> &points) {
    if (points.empty()) return 0;
    sort(points.begin(), points.end(), [](const vector<int>& u, const vector<int>& v) {
        return u[1] < v[1];
    });
    int pos = points[0][1];
    int ans = 1;
    for (const vector<int>& b : points) {
        if (b[0] > pos) {
            pos = b[1];
            ++ans;
        }
    }
    return ans;
}


int main() {

    vector<vector<int>> points;
    vector<int> point;
    point.push_back(10);
    point.push_back(16);
    points.push_back(point);
    point.clear();

    point.push_back(2);
    point.push_back(8);
    points.push_back(point);
    point.clear();

    point.push_back(1);
    point.push_back(6);
    points.push_back(point);
    point.clear();

    point.push_back(7);
    point.push_back(12);
    points.push_back(point);
    point.clear();

//    for (auto i = points.begin(); i < points.end(); ++i) {
//        cout << i->at(0) << "," << i->at(1) << endl;
//        i->push_back(1);
//        i->push_back(1);
//    }
//
//    for (auto i = points.begin(); i < points.end(); ++i) {
//        cout << i->at(0) << "," << i->at(1) << "," <<i->at(2) << "," << i->at(3) << endl;
//    }

    Solution solution;
    auto a = solution.findMinArrowShots(points);

    cout << "x:" << a << endl;

    return 0;
}
