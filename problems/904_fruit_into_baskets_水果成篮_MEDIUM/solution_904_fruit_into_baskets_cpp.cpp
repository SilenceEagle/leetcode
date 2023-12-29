#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> cnt;
        int l = 0, r = 0, ans = 0;
        for (; r < n; r++) {
            ++cnt[fruits[r]];
            while (cnt.size() > 2) {
                auto it = cnt.find(fruits[l]);
                --(it->second);
                if (it->second == 0) {
                    cnt.erase(it);
                }
                ++l;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;

    }
};

int main() {
    Solution so;
    vector<int> fruits{1, 2, 1};
    int result = so.totalFruit(fruits);
    cout << result << endl;
}