#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findPosition(int N , int M , int K) {
        int newpos = (K + M -2)%(N)+1;
        return newpos;
    }
};