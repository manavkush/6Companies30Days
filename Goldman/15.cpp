#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        const int INF = 1e6;
        int n = nums.size();
        int ii = 0, ll = n;
        int len = INF;
        int sum = 0;
        for(int ff=0;ff<n;ff++) {
            sum += nums[ff];
            if(sum>=target) {
                len = min(ff-ii+1, len);
                while(ii<ff) {
                    sum-=nums[ii];
                    ii++;
                    if(sum>=target) {
                        len = min(len, ff-ii+1);
                    } else {
                        break;
                    }
                }
            } else {
                continue;
            }
        }
        if(len == 1e6)  return 0;
        else return len;
        
    }
};