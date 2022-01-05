#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    priority_queue<int> pq1;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        pq1.push(a);
        if(pq1.size()>10) {
            priority_queue<int> pq2;
            for(int i=0;i<10;i++) {
                pq2.push(pq1.top());
                pq1.pop();
            }
            pq1 = pq2;
        }
    }
    for(int i=0;i<10;i++) {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
}