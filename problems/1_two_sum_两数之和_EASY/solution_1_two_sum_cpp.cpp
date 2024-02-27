#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int s = nums.size();
        vector<int> ans;
        for (int i = 0; i < s; i++) {
            if (mp.find(target - nums[i]) != mp.end()) {
                ans.emplace_back(mp[target - nums[i]]);
                ans.emplace_back(i);
                return ans;
            } else {
                mp[nums[i]] = i;
            }
        }
        return ans;
        
    }
};

int main() {
    vector<int> nums {2, 7, 11, 15};
    int target = 9;

    Solution so;
    vector<int> ans = so.twoSum(nums, target);
    for (int i: ans) {
        cout << i << ", ";
    }
    cout << endl;
}