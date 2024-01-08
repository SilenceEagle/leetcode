#include <iostream>
 
using namespace std;
 
int main() {
    int a, b;
    while (cin>>a>>b) {
        if (a && b){
            cout << a + b << '\n';
        } else {
            break;
        }
    }
}
/**************************************************************
    Problem: 1002
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:13 ms
    Memory:2176 kb
****************************************************************/