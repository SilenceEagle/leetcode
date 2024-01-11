#include <iostream>
#include <string>
 
using namespace std;
 
void reverse(string& s, int start, int end) {
    for (int i = start, j = end - 1; i < j; i++, j--) {
        swap(s[i], s[j]);
    }
}
 
int main() {
    int n;
    while (cin >> n) {
        string s;
        cin >> s;
        reverse(s, 0, s.length());
        reverse(s, 0, n);
        reverse(s, n, s.length());
        cout << s;
    }
    return 0;
}
/**************************************************************
    Problem: 1065
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:25 ms
    Memory:2180 kb
****************************************************************/