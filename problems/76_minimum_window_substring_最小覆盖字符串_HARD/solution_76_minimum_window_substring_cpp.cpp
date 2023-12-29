#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> tm;
        for (char c: t) {
            ++tm[c];
        }
        int m = s.size();
        int n = t.size();
        int l = 0, r = 0, minL = m + 1, thisL = m + 1, ansL = -1;
        int remain = t.size();
        for (; r < m; r++)
        {
            if (tm[s[r]]-- > 0) {
                remain--;
            }
            while (!remain) {
                thisL = r - l + 1;
                if (thisL < minL) {
                    minL = thisL;
                    ansL = l;
                }
                if (++tm[s[l++]] > 0) {
                    remain++;
                }
            }
        }
        return minL > m ? string() : s.substr(ansL, minL);


    }
};

class Solution2 {
public:
    unordered_map<char, int> sm, tm;
    bool check() {
        for (const auto & p: tm) {
            if (sm[p.first] < p.second) {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        
        for (char c: t) {
            ++tm[c];
        }
        int m = s.size();
        int n = t.size();
        int l = 0, r = 0, minL = m + 1, ansL = -1;
        // string ans = "";
        for (; r < m; r++) {
            ++sm[s[r]];
            if (r >= n - 1) {   
                while (check()) {
                    if (r - l + 1 < minL) {
                        minL = r - l + 1;
                        ansL = l;
                        // ans = s.substr(l, thisL);
                    }
                    --sm[s[l]];
                    l++;
                }
            }
        }
        return minL > m ? string() : s.substr(ansL, minL);


    }
};

int main() {
    Solution so;
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string result = so.minWindow(s, t);
    cout << result << endl;
}