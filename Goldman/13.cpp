#include<bits/stdc++.h>
using namespace std;
class Solution{

public: 
    bool isdig(char c) {
        return (c >= '0' and c <='9');
    }
    
    string util(string &s, int &n, int &l) {
        string ans = "";
        int num = 0;
        
        for(;l<n;l++) {
            if(isdig(s[l])) {
                num = num*10 + (s[l]-'0');
                
            } else if(s[l]=='[') {
                l++;
                string ret = util(s, n, l);
                while(num--) {
                    ans += ret;
                }
                num=0;
            } else if(s[l]==']') {
                return ans;
            } else {
                ans += s[l];
            }
        }
        return ans;
        
    }

    string decodedString(string s){
        int n = s.length(),l = 0;
        return util(s, n, l);
    }
};