#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    while (cin >> s) {
        int n = 0;
        int oldSize = s.length();
        for (char c: s) {
            if (c >= '0' && c <= '9') {
                n++;
            }
        }
        int newSize = oldSize + n * 5;
        s.resize(newSize);
         
        for (int i = oldSize - 1, j = newSize - 1; i < j; i--,j--) {
            if (s[i] >= '0' && s[i] <= '9') {
                s[j] = 'r';
                s[j-1] = 'e';
                s[j-2] = 'b';
                s[j-3] = 'm';
                s[j-4] = 'u';
                s[j-5] = 'n';
                j -= 5;
            } else {
                s[j] = s[i];
            }
        }
        cout << s << "\n";
         
    }
}
/**************************************************************
    Problem: 1064
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:34 ms
    Memory:2180 kb
****************************************************************/