#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    long long curr = 1;
	    vector<long long> ugly;
	    ugly.push_back(1);
	    
	    int two = 0, three = 0, five = 0;
	    while(ugly.size()<n) {
	        long long mult2 = ugly[two]*2;
	        long long mult3 = ugly[three]*3;
	        long long mult5 = ugly[five]*5;
	        long long newugly = min({mult2, mult3, mult5});
	        ugly.push_back(newugly);
	        if(newugly == mult2) {
	            two++;
	        }
	        if(newugly == mult3) {
	            three++;
	        }
	        if(newugly == mult5) {
	            five++;
	        }
	    }
	    return ugly[n-1];
	}
};