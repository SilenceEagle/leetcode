#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                cout << ' ';
            }
            for (int k = 1; k <= i; k++) {
                cout << k;
            }
            for (int k = i - 1; k >= 1; k--) {
                cout << k;
            }
            cout << "\n";
        }
        for (int i = n-1; i >= 1; i--) {
            for (int j = i + 1; j <= n; j++) {
                cout << ' ';
            }
            for (int k = 1; k <= i; k++) {
                cout << k;
            }
            for (int k = i - 1; k >= 1; k--) {
                cout << k;
            }
            cout << "\n";
        }
    }
}
/**************************************************************
    Problem: 1011
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:8 ms
    Memory:2176 kb
****************************************************************/