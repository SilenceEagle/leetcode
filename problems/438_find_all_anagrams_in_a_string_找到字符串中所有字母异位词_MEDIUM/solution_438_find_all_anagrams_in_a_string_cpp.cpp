#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int count[26] = {0};
        int lens = s.length(), lenp = p.length();
        vector<int> ans;
        if (lens < lenp) {
            return ans;
        }
        int diff = 0; // p - s
        for (int i = 0; i < lenp; i++) {
            count[p[i]-'a']++;
            count[s[i]-'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (count[i]) {
                ++diff;
            }
        }
        if (0 == diff) {
            ans.emplace_back(0);
        }

        for (int i = lenp; i < lens; i++) {
            if (count[s[i]-'a'] == 1) {
                --diff;
            } else if (count[s[i]-'a'] == 0) {
                ++diff;
            }
            count[s[i]-'a']--;
            
            if (count[s[i-lenp]-'a'] == -1) {
                --diff;
            } else if (count[s[i-lenp]-'a'] == 0) {
                ++diff;
            }

            
            count[s[i-lenp]-'a']++;

            if (diff == 0) {
                ans.emplace_back(i-lenp+1);
            }
        }
        return ans;

    }
};

class Solution2 {
public:
    bool isSame(int a[], int b[]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int counts[26] = {0};
        int countp[26] = {0};
        int lens = s.length(), lenp = p.length();
        vector<int> ans;
        if (lens < lenp) {
            return ans;
        }
        for (char c: p) {
            countp[c-'a']++;
        }

        for (int i = 0; i < lens; i++) {
            counts[s[i]-'a']++;
            if (i >= lenp) {
                counts[s[i-lenp]-'a']--;
            }
            if (i >= lenp - 1 && isSame(counts, countp)) {
                ans.emplace_back(i-lenp+1);
            }
        }
        return ans;

    }
};

int main() {
    Solution so;
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> ans = so.findAnagrams(s, p);
    for (int i: ans) {
        cout << i << ", ";
    }
    cout << endl;
}