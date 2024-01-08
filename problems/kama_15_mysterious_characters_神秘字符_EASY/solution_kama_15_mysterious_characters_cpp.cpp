#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n;
    while (cin >> n) {
        while (n--) {
            string s1, s2;
            cin >> s1 >> s2;
            int l1 = s1.length();
            cout << s1.substr(0, l1/2) << s2 << s1.substr(l1/2, l1/2) << endl;
        }
    }
}
/**************************************************************
    Problem: 1014
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:13 ms
    Memory:2180 kb
****************************************************************/
