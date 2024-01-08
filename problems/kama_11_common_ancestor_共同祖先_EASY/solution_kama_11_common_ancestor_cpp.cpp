#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    while (cin >> n) {
        int father[21] = {0};
        int c, f;
        while (n--) {
            cin >> c >> f;
            father[c] = f;
        }
        int c1 = 0, c2 = 0;
        int f1 = father[1];
        while (f1) {
            c1++;
            f1 = father[f1];
        }
         
        int f2 = father[2];
        while (f2) {
            c2++;
            f2 = father[f2];
        }
        if (c1 < c2) {
            cout << "You are my younger\n";
        } else if (c1 > c2) {
            cout << "You are my elder\n";
        } else {
            cout << "You are my brother\n";
        }
    }
}
/**************************************************************
    Problem: 1010
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:8 ms
    Memory:2176 kb
****************************************************************/