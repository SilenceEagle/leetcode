#include <iostream>
#include <string>

using namespace std;

// double pointers in reverse order
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.length() - 1, j = t.length() - 1;
        int skipS = 0, skipT = 0;
        while (i >= 0 || j >= 0) {
            while (i >= 0) {
                if ('#' == s[i]) {
                    skipS += 1;
                    i--;
                } else if (skipS) {
                    skipS--;
                    i--;
                } else {
                    break;
                }
            }
            while (j >= 0) {
                if ('#' == t[j]) {
                    skipT++;
                    j--;
                } else if (skipT) {
                    skipT--;
                    j--;
                } else {
                    break;
                }
            }
            if (i >= 0 && j >=0 ) {
                if (s[i] != t[j]) {
                    return false;
                }
            } else {
                if (i >= 0 || j >= 0) {
                    return false;
                }
            }
            i--, j--;
        }
        
        return true;            

    }
};

// recover full string in-place
class Solution2 {
public:
    bool backspaceCompare(string s, string t) {
        int valid = 0, current = 0;
        for (current = 0;current < s.length(); current++) {
            if ('#' == s[current]) {
                if (valid) {
                    valid--;
                }
            } else {
                s[valid++] = s[current];
            }
        }
        int ns = valid;
        valid = 0;

        for (current = 0;current < t.length(); current++) {
            if ('#' == t[current]) {
                if (valid) {
                    valid--;
                }
            } else {
                t[valid++] = t[current];
            }
        }
        int nt = valid;

        if (ns == nt) {
            for (int i = 0; i < ns; i++) {
                if (s[i] != t[i]) {
                    return false;
                }
            }
            return true;
        } else {
            return false;
        }      

    }
};

int main() {
    Solution so;
    string s = "bxj##tw";
    string t = "bxj###tw";

    bool results = so.backspaceCompare(s, t);
    cout << results << endl;
}