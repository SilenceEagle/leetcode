#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    while (cin >> n){
        int sum = 0, m;
        while (n) {
            m = n % 10;
            if (m % 2 == 0) {
                sum += m;
            }
            n /= 10;
        }
        cout << sum << "\n\n";
    }
}
/**************************************************************
    Problem: 1008
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:11 ms
    Memory:2176 kb
****************************************************************/