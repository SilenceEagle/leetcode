#include <iostream>
#include <vector>
#include <deque>
#include <set>

using namespace std;

class Solution {
private:
    class MyQue {
    public:
        deque<int> que;

        void push(int v) {
            while (!que.empty() && que.back() < v) {
                que.pop_back();
            }
            que.push_back(v);
        }

        void pop(int v) {
            if (!que.empty() && v == que.front()) {
                que.pop_front();
            }
        }

        int front() {
            return que.front();
        }
    };
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        MyQue que;
        vector<int> ans;
        for (int i = 0; i < k; i++){
            que.push(nums[i]);
        }
        ans.push_back(que.front());
        for (int i = k; i < nums.size(); i++) {
            que.push(nums[i]);
            que.pop(nums[i-k]);
            ans.push_back(que.front());
        }

        return ans;

    }
};

class Solution2 {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> que;
        vector<int> ans;
        for (int i = 0; i < k; i++){
            que.insert(nums[i]);
        }
        ans.push_back(*que.rbegin());
        for (int i = k; i < nums.size(); i++) {
            que.insert(nums[i]);
            que.erase(que.find(nums[i-k]));
            ans.push_back(*que.rbegin());
        }

        return ans;

    }
};

int main() {
    Solution so;

    vector<int> nums {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> ans;  // [3,3,5,5,6,7]

    ans = so.maxSlidingWindow(nums, k);

    for (int n: ans) {
        cout << n << ", ";
    }
    cout << endl;

    return 0;
}