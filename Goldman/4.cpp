#include<bits/stdc++.h>
using namespace std;
string encode(string src)
{     
  int n = src.length();
  string ans;
  int idx = 0;
  int val = 1;
  while(idx<n) {
      ans += src[idx];
      idx++;
      while(idx<n and src[idx]==src[idx-1]) {
          val++;
          idx++;
      }
      ans += to_string(val);
      val = 1;
  }
  return ans;
}   