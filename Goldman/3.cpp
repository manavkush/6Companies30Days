#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long int curr = 1, ans = 0;
        int l = 0;
        
        for(int r=0;r<n;r++) {
            curr *= a[r];
            
            while(curr>=k and l<=r) {
                curr/=a[l];
                l++;
            }
            ans+=(r-l+1);
        }
        return ans;
    }
};