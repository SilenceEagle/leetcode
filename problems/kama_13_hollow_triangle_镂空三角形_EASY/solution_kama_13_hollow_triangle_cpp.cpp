#include <iostream>
 
using namespace std;
 
int main() {
    char c;
    while (cin >> c && c != '@') {
        int n;
        cin >> n;
        for (int i = 1; i < n; i++) {
            int left_space = n - i;
            int mid_space = max(2*(i-1)-1, 0);
            for (int j = 0; j < left_space; j++) {
                cout << " ";
            }
            cout << c;
            if (mid_space) {
                for (int k = 0; k < mid_space; k++) {
                    cout << " ";
                }
                cout << c;
            }
            cout << "\n";
        }
        int m = 2 * n - 1;
        while (m--) {
            cout << c;
        }
        cout << "\n\n";
    }
}
/**************************************************************
    Problem: 1012
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:7 ms
    Memory:2176 kb
****************************************************************/