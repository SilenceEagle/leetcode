#include <iostream>
#include <vector>

using namespace std;

// swap zero and nonzero
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroi = 0;
        for (int zeroi = 0; zeroi < nums.size(); zeroi++) {
            if (!nums[zeroi]) {
                nonZeroi = nonZeroi > zeroi ? nonZeroi : zeroi + 1;
                while (nonZeroi < nums.size() && !nums[nonZeroi]) {
                    nonZeroi++;
                }
                if (nonZeroi < nums.size()) {
                    nums[zeroi] = nums[nonZeroi];
                    nums[nonZeroi] = 0;
                }
                else {
                    return;
                }
            }
        }
    }
};

// swap nonzero to head
class Solution2 {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroi = 0;
        for (int zeroi = 0; zeroi < nums.size(); zeroi++) {
            if (!nums[zeroi]) {
                nonZeroi = nonZeroi > zeroi ? nonZeroi : zeroi + 1;
                while (nonZeroi < nums.size() && !nums[nonZeroi]) {
                    nonZeroi++;
                }
                if (nonZeroi < nums.size()) {
                    nums[zeroi] = nums[nonZeroi];
                    nums[nonZeroi] = 0;
                }
                else {
                    return;
                }
            }
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    int val = 3;

    s.moveZeroes(nums);
    cout << "[";
    // for (int i = 0; i < nums.size(); i++)
    //     cout << nums[i] << ", ";
    for (auto i: nums) {
        cout << i << ", ";
    }
    cout << "]" << endl;
}