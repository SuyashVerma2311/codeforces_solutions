#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int k = n%2020, m = n/2020;
        if(k <= m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}