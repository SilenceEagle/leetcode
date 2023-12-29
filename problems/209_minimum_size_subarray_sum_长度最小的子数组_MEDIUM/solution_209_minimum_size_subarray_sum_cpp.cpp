#include <vector>
#include <iostream>
#include <limits.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int results = INT32_MAX;
        int s = 0, e = 0;
        int sum = 0, subL = 0;
        for (; e < nums.size(); e++) {
            sum += nums[e];
            while (sum >= target) {
                subL = e - s + 1;
                results = results > subL ? subL : results;
                sum -= nums[s++];
            }
        }
        return results == INT32_MAX ? 0 : results;
    }
};


int main() {
    Solution so;
    vector<int> nums {2, 3, 1, 2, 4, 3};
    int target = 7;
    int result = so.minSubArrayLen(target, nums);
    cout << result << endl;
}