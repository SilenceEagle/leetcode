#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n;
    while (cin >> n) {
        //cout << n << endl;
        cin.ignore();
        while (n--) {
            //cout << n << endl;
            string tmp;
            getline(cin, tmp);
            //cout << tmp << "\n";
            for (int i = 0; i < tmp.length(); i++) {
                if (i==0 && (tmp[i] != ' ')) {
                    cout << (char) toupper(tmp[i]);
                } else if (tmp[i] != ' ' && tmp[i-1] == ' ') {
                    cout << (char) toupper(tmp[i]);
                }
            }
            cout << "\n";
        }
    }
     
    return 0;
}
/**************************************************************
    Problem: 1013
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:8 ms
    Memory:2180 kb
****************************************************************/