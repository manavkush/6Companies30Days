#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        // states -> bought, sold
        vector<vector<int>> buy(N+1, vector<int>(K+1, -600000));
        vector<vector<int>> sell(N+1, vector<int> (K+1, 0));
        
        int ans = 0;
        for(int j=1;j<=K;j++) {
            for(int i=1;i<=N;i++) {
                buy[i][j] = max( sell[i-1][j-1]-A[i-1] , buy[i-1][j] );
                sell[i][j] = max( sell[i-1][j] , buy[i-1][j]+A[i-1]);
                ans = max(ans, sell[i][j]);
            }
        }
        return ans;
    }
};
