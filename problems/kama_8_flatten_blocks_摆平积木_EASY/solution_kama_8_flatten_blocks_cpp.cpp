#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    while (cin>>n && n) {
        vector<int> count(n, 0);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> count[i];
            sum += count[i];
        }
        int mean = sum / n;
        int ans = 0;
        for (int c: count) {
            ans += (c > mean ? c - mean : 0);
        }
        cout << ans << "\n\n";
    }
}
/**************************************************************
    Problem: 1007
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:10 ms
    Memory:2176 kb
****************************************************************/