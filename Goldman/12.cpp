#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        int prev = 1;
        long long ans = (N*(N+1)*(2*N+1))/6;
        return ans;
    }
};