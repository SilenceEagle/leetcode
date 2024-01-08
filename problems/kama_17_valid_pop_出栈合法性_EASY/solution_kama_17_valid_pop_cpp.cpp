#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    while (cin >> n && n > 0) {
        int mark[n] {0};
        int m = 0, q;
        bool yes = true;
        while (n--) {
            cin >> q;
            if (!yes) {
                continue;
            }
            m = max(m, q);
            // mark
            mark[q] = 1;  // poped 
            if (q < m && mark[q+1] == 0) {
                // q + 1 should poped
                yes = false;
            }
        }
        if (yes) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
         
    }
}
/**************************************************************
    Problem: 1016
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:8 ms
    Memory:2176 kb
****************************************************************/