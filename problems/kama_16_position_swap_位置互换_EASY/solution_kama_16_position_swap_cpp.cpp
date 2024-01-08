#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n;
    while (cin >> n) {
        while (n--) {
            string tmp;
            cin >> tmp;
            int m = tmp.length();
            for (int i = 0; i < m; i += 2) {
                cout << tmp[i+1] << tmp[i];
            }
            cout << endl;
        }
    }
}
/**************************************************************
    Problem: 1015
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:12 ms
    Memory:2180 kb
****************************************************************/