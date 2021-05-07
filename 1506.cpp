#include <bits/stdc++.h>
using namespace std;
    
void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
    
void solve() {
    string a,b; cin>>a>>b;
    if(a==b) {cout<<"0\n"; return;}
    int n=a.length(), m=b.length(), ans=0;
    for(int len=1; len<=min(n,m); len++) {
        for(int i=0; i+len<=n; i++) {
            for(int j=0; j+len<=m; j++) {
                if(a.substr(i,len)==b.substr(j,len)) {
                    ans = max(len, ans);
                }
            }
        }
    }
    cout<<n+m-(2*ans)<<"\n"; return;
}
    
int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w",stdout);
    #endif
    int t; cin>>t;
    while(t--) solve();
}