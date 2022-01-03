#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1.length()<str2.length()) {
            swap(str1, str2);
        }
        int n,m;
        n = str1.length();
        m = str2.length();
        
        
        int len = __gcd(n,m);
        string temp = str2.substr(0,len);
        string ans1, ans2;
        while(ans1.length()<str1.length()) {
            ans1+=temp;
        }
        while(ans2.length()<str2.length()) {
            ans2+=temp;
        }
        if(ans1==str1 and ans2==str2) {
            return temp;
        } else {
            return "";
        }
    }
};