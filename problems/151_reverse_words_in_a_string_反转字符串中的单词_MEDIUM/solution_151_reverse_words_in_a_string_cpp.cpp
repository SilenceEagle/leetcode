#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    void reverse(string& s, int start, int end) {
        for (int i = start, j = end-1; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
    }
    string reverseWords(string s) {
        // delete spaces
        int slow = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                // add 1 space
                if (i > 0 && s[i-1] == ' ' && slow != 0) {
                    s[slow] = ' ';
                    slow++;
                }
                if (slow != i) {
                    s[slow] = s[i];
                }
                slow++;   
            } 
        }
        // resize
        s.resize(slow);

        // reverse
        reverse(s, 0, s.length());

        // reverse words
        int left = 0;
        for (int right = 0; right < s.length(); right++) {
            if (s[right] == ' ') {
                reverse(s, left, right);
                left = right + 1;
            }
        }
        reverse(s, left, s.length());


        return s;

    }
};


int main() {
    Solution so;
    string s = " the sky is blue ";
    string ans = so.reverseWords(s);
    cout << ans;
    // "blue is sky the"
}