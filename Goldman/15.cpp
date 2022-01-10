#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPair(vector<int> nums, int k)
    {
        int n = nums.size();
        map<int, int> hash;
        for (int i = 0; i < n; i++) {
            hash[nums[i] % k]++;
        }
        if (hash[0] % 2 != 0)
            return false;
        int ff = 1;
        int ss = k - 1;
        while (ff < ss) {
            if (hash[ff] != hash[ss]) {
                return false;
            }
            ff++;
            ss--;
        }
        if (ff == ss) {
            if (hash[ff] % 2 != 0)
                return false;
        }
        return true;
    }
};