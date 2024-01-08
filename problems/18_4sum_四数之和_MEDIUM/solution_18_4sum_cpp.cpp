#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 3; i++) {
            if (nums[i] > target && (nums[i] >= 0)) {
                break;
            }
            if (i > 0 && nums[i] == nums[i-1]) continue;
            for (int j = i + 1; j < n - 2; j++) {
                if (nums[i] + nums[j] > target && nums[i] + nums[j] >= 0) {
                    break;
                }
                if (j > i + 1 && nums[j] == nums[j-1]) continue;
                long long int tmp = nums[i] + nums[j];
                int left = j + 1, right = n - 1;
                while (left < right) {
                    if (tmp + nums[left] + nums[right] < target) {
                        left++;
                    } else if (tmp + nums[left] + nums[right] > target) {
                        right--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left+1]) {
                            left++;
                        }
                        while (left < right && nums[right] == nums[right-1]) {
                            right--;
                        }
                        left++;
                        right--;
                    }
                }
            }
        }
        return ans;

    }
};

int main() {
    Solution so;

    vector<int> nums {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = so.fourSum(nums, target);
    // [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
    for (vector<int> rs: result) {
        cout << "[";
        for (int n: rs) {
            cout << n << ", ";
        }
        cout << "]" << endl;
    }
}