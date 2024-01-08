#include <iostream>
 
using namespace std;
 
int main() {
    int n, a, b;
    while (cin >> n) {
        while (n--) {
            int a, b;
            cin >> a >> b;
            cout << a+b << '\n';
        }
    }
}
/**************************************************************
    Problem: 1001
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:13 ms
    Memory:2176 kb
****************************************************************/