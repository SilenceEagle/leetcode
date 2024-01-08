#include <iostream>
 
using namespace std;
 
int main() {
    int n, m;
    while (cin >> n) {
        while (n--) {
            cin >> m;
            int sum = 0, a;
            while (m--) {
                cin >> a;
                sum += a;
            }
            cout << sum << "\n";
            if (n >= 1) {
                cout << "\n";
            }
        }
    }
}
/**************************************************************
    Problem: 1005
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:8 ms
    Memory:2176 kb
****************************************************************/
