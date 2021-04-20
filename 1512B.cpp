#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int t; cin>>t;
    while(t--) {
        int n, p1=-1, p2=-1, q1=-1, q2=1; cin>>n;
        char inp;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin>>inp;
                if(inp=='*') {
                    if(p1==-1) p1=i, q1=j;
                    else p2=i, q2=j;
                }
            }
        }
        if(p2==p1) {p2<n-1 ? p2++ : p2--;}
        if(q2==q1) {q2<n-1 ? q2++ : q2--;}
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if((i==p1 && j==q1) || (i==p2 && j==q2) || (i==p1 && j==q2) || (i==p2 && j==q1)) {cout<<"*";}
                else {cout<<".";}
            }
            cout<<endl;
        }
    }
}