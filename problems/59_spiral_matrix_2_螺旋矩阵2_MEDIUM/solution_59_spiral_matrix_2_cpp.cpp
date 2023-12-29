#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int count = 1;
        int i, j, x;
        for (x = 0; x < n / 2; x++) {
            for (j = x; j < n - x - 1; j++) {
                ans[x][j] = count++;
            }
            for (i = x; i < n - x - 1; i++) {
                ans[i][j] = count++;
            }
            for (; j > x; j--) {
                ans[i][j] = count++;
            }
            for (; i > x; i--) {
                ans[i][j] = count++;
            }
        }
        if (n % 2 == 1) {
            ans[x][x] = count;
        }
        return ans;
    }
};


int main() {
    Solution so;
    int n = 3;
    vector<vector<int>> result = so.generateMatrix(n);

    for (auto a: result) {
        for (int b: a) {
            cout << b << ", ";
        }
        cout << endl;
    }
}