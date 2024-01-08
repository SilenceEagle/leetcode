#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> mp;
        for (int a: nums1) {
            for (int b: nums2) {
                mp[a+b]++;
            }
        }
        int ans = 0;
        for (int c: nums3) {
            for (int d: nums4) {
                if (mp.find(-c-d) != mp.end()) {
                    ans += mp[-c-d];
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution so;
    vector<int> A = {1, 2};
    vector<int> B = {-2, -1};
    vector<int> C = {-1, 2};
    vector<int> D = {0, 2};

    int ans = so.fourSumCount(A, B, C, D);

    cout << ans << endl;
}