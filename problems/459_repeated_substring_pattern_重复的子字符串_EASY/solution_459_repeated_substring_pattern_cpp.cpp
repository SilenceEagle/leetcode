#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss = s + s;
        ss.erase(ss.begin());
        ss.erase(ss.end()-1);
        if (ss.find(s) != string::npos) return true;
        return false;

    }
};



int main() {
    Solution so;

    string s1 = "abab";
    string s2 = "abc";

    cout << so.repeatedSubstringPattern(s1) << endl;
    cout << so.repeatedSubstringPattern(s2) << endl;
}