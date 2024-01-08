#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    while (getline(cin, s)) {
        int sum = 0, count = 0;
        bool unknown = false;
        for (char c: s){
            switch (c) {
                case 'A': {sum += 4; count++; break;}
                case 'B': {sum += 3; count++; break;}
                case 'C': {sum += 2; count++; break;}
                case 'D': {sum += 1; count++; break;}
                case 'F': {count++; break;}
                case ' ': {continue;}
                default: {
                    unknown = true;
                    break;
                }
            }
            if (unknown) break;
        }
        if (unknown) {
            cout << "Unknown" << endl;
        } else {
            // cout << sum << count;
            printf("%.2f\n", double(sum)/count);
        }
    }
}
/**************************************************************
    Problem: 1006
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:8 ms
    Memory:2180 kb
****************************************************************/
