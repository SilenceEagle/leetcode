#include <iostream>
 
using namespace std;
 
int main() {
    int m, k;
    while (cin >> m >> k && m && k) {
        int sum = m;
        int present = m / k;
        sum += present;
        while ((m % k + present) >= k) {
            m = m % k + present;
            present = m / k;
            sum += present;
        }
        cout << sum << "\n";
    }
}
/**************************************************************
    Problem: 1009
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:13 ms
    Memory:2176 kb
****************************************************************/
