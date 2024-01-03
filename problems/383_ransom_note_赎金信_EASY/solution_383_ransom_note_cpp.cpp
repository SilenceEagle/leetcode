#include <iostream> 
using namespace std; 

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};

        for (char c: magazine) {
            count[c-'a']++;
        }

        for (char c: ransomNote) {
            count[c-'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] < 0) {
                return false;
            }
        }

        return true;
    }
};


int main() {
    string ransomNote = "aa", magazine = "aab";
    Solution so;
    bool ans = so.canConstruct(ransomNote, magazine);
    cout << ans << endl; 
}