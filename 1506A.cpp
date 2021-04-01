#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int_fast64_t n,m,x,out; cin>>n>>m>>x;
        out = x%n ? ((x/n)-1)*m : ((x/n))+((n)-1)*m;
        cout<<out<<endl;
    }
}