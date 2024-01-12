#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2) return false;
        stack<char> st;
        for (char c: s) {
            if ('(' == c) {
                st.push(')');
            } else if ('[' == c) {
                st.push(']');
            } else if ('{' == c) {
                st.push('}');
            } else if (st.empty() || st.top() != c) {
                return false;
            } else {
                st.pop();
            }
        }

        return st.empty();
    }
};

int main() {
    Solution so;

    string s1 = "()";
    string s2 = "((])";

    cout << so.isValid(s1) << endl; // 1
    cout << so.isValid(s2) << endl; // 0
}