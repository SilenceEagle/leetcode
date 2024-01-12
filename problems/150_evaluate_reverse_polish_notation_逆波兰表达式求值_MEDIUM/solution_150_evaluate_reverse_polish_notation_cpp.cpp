#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string s: tokens) {
            if (s.compare("+") && s.compare("-") && s.compare("*") && s.compare("/") ) {
                st.push(stoi(s));
            } else {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                switch (s[0]) {
                    case '+': st.push(a+b); break;
                    case '-': st.push(a-b); break;
                    case '*': st.push(a*b); break;
                    case '/': st.push(a/b); break;
                }
            }
        }
        return st.top();
    }
};

int main() {
    Solution so;

    vector<string> tokens {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    cout << so.evalRPN(tokens) << endl; // 22
}