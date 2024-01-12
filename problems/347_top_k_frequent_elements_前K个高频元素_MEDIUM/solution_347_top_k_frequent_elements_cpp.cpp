#include <iostream>
#include <queue>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    //little heap
    class mycomparison{
    public:
        bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs) {
            return lhs.second > rhs.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int n: nums) {
            count[n]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, mycomparison> pri_que;

        for (unordered_map<int, int>::iterator it = count.begin(); it != count.end(); it++) {
            pri_que.push(*it);
            if (pri_que.size() > k) {
                pri_que.pop();
            }
        }
        vector<int> ans(k);
        for (int i = k - 1; i >= 0; i--) {
            ans[i] = pri_que.top().first;
            pri_que.pop();
        }

        return ans;
    }
};


int main() {
    Solution so;

    vector<int> nums {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> ans = so.topKFrequent(nums, k);

    for (int n: ans) {
        cout << n << ", ";
    }
    cout << endl;  // [1,2]
}