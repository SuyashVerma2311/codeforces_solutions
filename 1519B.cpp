#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n,m,k; cin>>n>>m>>k;
        if(k == m*n-1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}