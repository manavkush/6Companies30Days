#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        int n = string_list.size();
        vector<vector<string>> res;
        map<string, vector<string>> hash;
        for(auto x: string_list) {
            string sorted = x;
            sort(sorted.begin(), sorted.end());
            hash[sorted].push_back(x);
        }
        for(auto x: hash) {
            vector<string> ans;
            for(auto y: x.second) {
                ans.push_back(y);
            }
            if(!ans.empty()) {
                res.push_back(ans);
            }
        }
        return res;
    }
};