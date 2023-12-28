#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++){
            if (val != nums[fastIndex]) {
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        return slowIndex;
    }
};


int main() {
    Solution s;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int results = s.removeElement(nums, val);
    cout << "nums[0:" << results << "]:" << endl;
    cout << "\t[";
    for (int i = 0; i < results; i++)
        cout << nums[i] << ", ";
    cout << "]" << endl;
}
