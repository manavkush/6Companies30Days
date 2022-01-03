#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int CountWays(string str){
		    int n = str.length();
		    const int mod = 1e9+7;
		    
		    if(str[0] == '0')   return 0;
		    vector<long long> dp(n+1, 0);
		    dp[0] = 1;
		    dp[1] = 1;
		    
		    for(int i=1;i<n;i++) {
		        if(str[i] == '0') {
		            if(str[i-1]=='1' || str[i-1]=='2') {
		                dp[i+1] = dp[i-1];
		            } else {
		                return 0;
		            }
		        } else if(str[i-1]=='1') {
		            dp[i+1] = (dp[i] + dp[i-1])%mod;
		        } else if(str[i-1]=='2' and str[i]-'0'<7) {
		            dp[i+1] = (dp[i] + dp[i-1])%mod;
		        } else {
		            dp[i+1] = dp[i];
		        }
		    }
		    return dp[n];
		}

};