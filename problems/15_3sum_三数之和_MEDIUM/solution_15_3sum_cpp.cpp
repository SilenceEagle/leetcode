#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n-2; i++) {
            if (nums[i] > 0) {
                return ans;
            }
            if (i && nums[i] == nums[i-1]) {
                continue;
            }
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                if (nums[i] + nums[left] + nums[right] == 0) {
                    vector<int> tmp {nums[i], nums[left], nums[right]};
                    ans.emplace_back(tmp);
                    while (left < right && nums[right] == nums[right-1]) right--;
                    while (left < right && nums[left] == nums[left+1]) left++;

                    left++;
                    right--;
                } else if (nums[i] + nums[left] + nums[right] < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return ans;
        
    }
};


class Solution2 {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n-2; i++) {
            if (nums[i] > 0) {
                return ans;
            }
            if (i && nums[i] == nums[i-1]) {
                continue;
            }
            unordered_set<int> count;
            for (int j = i + 1; j < n; j++) {
                if (j > i + 2 &&  // [0, 0, 0]
                    nums[j] == nums[j - 1] &&
                    nums[j - 1] == nums[j - 2]) {
                        continue;
                    }
                int c = 0 - nums[i] - nums[j];
                if (count.find(c) != count.end()) {
                    // valid 
                    ans.push_back({nums[i], nums[j], c});
                    // delete c
                    count.erase(c);
                } else {
                    count.insert(nums[j]);
                }

            }
        }
        return ans;
        
    }
};


int main() {
    Solution so;

    vector<int> nums{-1, 0, 1, 2, -1, -4}; 
    vector<vector<int>> ans = so.threeSum(nums);

    // [[-1,-1,2],[-1,0,1]]
    for (auto ns: ans) {
        cout << "[";
        for (auto n : ns)
        {
            cout << n << ", ";
        }
        cout << "]" << endl;
    }
}