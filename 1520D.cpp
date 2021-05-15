#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        ll n,tmp,res=0; cin>>n;
        unordered_map<ll, ll> umap;
        for(ll i=0; i<n; i++) {
            cin>>tmp;
            umap[tmp-i]++;
        }
        auto it=umap.begin();
        for(;it!=umap.end();it++) res += (it->second)*(it->second - 1)/2;
        cout<<res<<"\n";
    }
}