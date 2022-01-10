#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& a) {
        int n = a.size();
        int inc = 0, dec = 0;
        int ans = 0;
        for(int i=1;i<n;i++) {
            if(a[i]==a[i-1] || (dec>0 and a[i]>a[i-1])) inc = dec = 0;
            inc += a[i]>a[i-1];
            dec += a[i]<a[i-1];
            if(inc and dec) {
                ans = max(ans, inc+dec+1);
            }
        }
        return ans;
    }
};