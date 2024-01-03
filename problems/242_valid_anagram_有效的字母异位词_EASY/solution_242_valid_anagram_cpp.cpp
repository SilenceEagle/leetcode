#include <iostream>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for (char c: s) {
            count[c]++;
        }
        for (char c: t) {
            count[c]--;
        }
        for (unordered_map<char, int>::iterator it=count.begin(); it!=count.end(); it++) {
            if (it->second) {
                return false;
            }
        }

        return true;
        
    }
};

int main() {
    Solution so;
    string s = "hello";
    string t = "elolh";
    bool ans = so.isAnagram(s, t);
    cout << ans << endl;
}