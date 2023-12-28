#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> results(nums.size(), 0);
        int left = 0, right = nums.size() - 1, k = nums.size() - 1;
        int ls = 0, rs = 0;
        while (left <= right) {
            ls = nums[left] * nums[left];
            if (left == right) {
                results[k] = ls;
                break;
            }
            rs = nums[right] * nums[right];
            if (ls < rs) {
                results[k--] = rs;
                right--;
            } else if (rs < ls) {
                results[k--] = ls;
                left++;
            } else {
                results[k] = ls;
                results[k-1] = rs;
                left++;
                right--;
                k -= 2;
            }
        }
        return results;
    }
};


int main() {
    Solution so;
    vector<int> nums {-4, -1, 0, 3, 10};
    vector<int> results = so.sortedSquares(nums);
    for (int a: results) {
        cout << a << ", ";
    }
    cout << endl;
}
