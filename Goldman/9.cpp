#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    string printMinNumberForPattern(string A){
        stack<int> st;
        int n = A.length();
        string ans;
        for(int i=0;i<=n;i++) {
            st.push(i+1);
            if(i==n || A[i]=='I') {
                while(!st.empty()) {
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        
        return ans;
    }
};