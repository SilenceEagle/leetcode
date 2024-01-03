#include <vector>
#include <iostream>
#include <string> 
#include <numeric>  // std:accumulate

using namespace std; 

// hash array
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        auto arrayHash = [fn = hash<int>{}] (const array<int, 26>& arr) -> size_t {
            return accumulate(arr.begin(), arr.end(), 0u, [&](size_t acc, int num) {
                return (acc << 1) ^ fn(num);
            });
        };

        unordered_map<array<int, 26>, vector<string>, decltype(arrayHash)> mp(0, arrayHash);
        for (string& s: strs) {
            array<int, 26> count {};
            int length = s.length();
            for (int i = 0; i < length; i++) {
                count[s[i]-'a']++;
            }
            mp[count].emplace_back(s);
        }
        vector<vector<string> > ans;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            ans.emplace_back(it->second);
        }
        return ans;
    }
};

// sort str as key
class Solution2 {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        auto arrayHash = [fn = hash<int>{}] (const array<int, 26>& arr) -> size_t {
            return accumulate(arr.begin(), arr.end(), 0u, [&](size_t acc, int num) {
                return (acc << 1) ^ fn(num);
            });
        };

        unordered_map<array<int, 26>, vector<string>, decltype(arrayHash)> mp(0, arrayHash);
        for (string& s: strs) {
            array<int, 26> count {};
            int length = s.length();
            for (int i = 0; i < length; i++) {
                count[s[i]-'a']++;
            }
            mp[count].emplace_back(s);
        }
        vector<vector<string> > ans;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            ans.emplace_back(it->second);
        }
        return ans;
    }
};



int main() {
    vector<string> strs {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution so;
    auto ans = so.groupAnagrams(strs);
    for (auto strs: ans) {
        for (string s: strs) {
            cout << s << ',';
        }
        cout << endl;
    }
}