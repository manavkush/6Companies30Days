#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int x, y;
        int xorel = 0;
        for(int i=1;i<=n;i++) {
            xorel ^= (i^arr[i-1]);
        }
        // now xor = x^y
        x = 0;
        y = 0;
        
        // find first bit that is different in x,y ie first set bit in xorelel
        int first_bit = (xorel & ~(xorel-1));
        
        // cout<<xorel<<" "<<first_bit<<endl;
        for(int i=1;i<=n;i++) {
            if(arr[i-1]&first_bit) {
                x ^= arr[i-1];   
            } else {
                y ^= (arr[i-1]);
            }
            
            if(i&first_bit) {
                x ^= i;
            } else {
                y ^= i;
            }
        }
        int *vec = new int[2];
        for(int i=0;i<n;i++) {
            if(arr[i]==x) {
                vec[0] = x;
                vec[1] = y;
                return vec;
            } else if(arr[i]==y) {
                vec[0] = y;
                vec[1] = x;
                return vec;
            }
        }
        
        return vec;
    }
};