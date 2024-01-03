#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int getSum(int n) {
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> sums;
        int sum = n;
        while (sum != 1) {
            sum = getSum(sum);
            if (sums.find(sum) != sums.end()) {
                return false;
            } else {
                sums.emplace(sum);
            }
        }
        return true;

    }
};

int main() {
    Solution so;
    bool ans = so.isHappy(19);
    cout << ans << endl;
}