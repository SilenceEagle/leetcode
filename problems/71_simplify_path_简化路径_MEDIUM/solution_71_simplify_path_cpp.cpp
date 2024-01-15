#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        auto split = [](const string& s, char delim) -> vector<string> {
            vector<string> st;
            string cur;
            for (char c: s) {
                if ('/' == c) {
                    st.push_back(cur);
                    cur.clear();
                }
                else {
                    cur += c;
                }
            }
            st.push_back(cur);
            return st;
        };
        vector<string> sp = split(path, '/');
        deque<string> st;

        for (string cur: sp) {
            if (cur == ".." && !st.empty()) {
                st.pop_back();
            } else if (cur != "" && cur !="." && cur != "..") {
                st.push_back(cur);
            }
        }
        
        string ans = "";
        while (!st.empty()) {
            ans += "/";
            ans += st.front();
            st.pop_front();
        }
        if (ans == "") ans = "/";
        return ans;
    }

};

class Solution2 {
public:
    string simplifyPath(string path) {
        deque<string> st;
        string cur = "";
        for (int i = 0; i < path.size(); i++) {
            if (i == path.size() - 1 && path[i] != '/') {
                cur.append(path, i, 1);
            }
            if (path[i] == '/' || i == path.size() - 1) {
                if (cur == "..") {
                   if (!st.empty())  {
                       st.pop_back();
                   }
                } else if (cur != "." && cur != "") {
                    st.push_back(cur);
                }
                cur = "";
            } else {
                cur.append(path, i, 1);
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans += "/";
            ans += st.front();
            st.pop_front();
        }
        if (ans == "") ans = "/";
        return ans;
    }

};


int main() {
    Solution so;
    string path = "/a//b////c/d//././/../";
    string ans = so.simplifyPath(path);

    cout << ans << endl; // "/a/b/c"
}
