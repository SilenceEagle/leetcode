#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string t;
        for (char c: s) {
            if (t.empty() || t.back() != c) {
                t.push_back(c);
            } else {
                t.pop_back();
            }
        }
        return t;
    }
};

class Solutions {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for (char c: s) {
            if (st.empty() || st.top() != c) {
                st.push(c);
            } else {
                st.pop();
            }
        }
        s.resize(st.size());
        for (int i = st.size() - 1; i >=0; i--) {
            s[i] = st.top();
            st.pop();
        }
        return s;
    }
};

int main() {
    Solution so;

    string s1 = "abbaca";
    cout << so.removeDuplicates(s1) << endl;  // ca
}