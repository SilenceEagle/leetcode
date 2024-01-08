#include <iostream>
 
using namespace std;
 
int main() {
    int n, a;
    while (cin >> n) {
        int sum = 0;
        if (n) {
            while (n--) {
                cin >> a;
                sum += a;
            }
            cout << sum << '\n';
        } else {
            break;
        }
    }
}
/**************************************************************
    Problem: 1003
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:13 ms
    Memory:2176 kb
****************************************************************/