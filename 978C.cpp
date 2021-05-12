#include <bits/stdc++.h>
using namespace std;
  
#define ll uint64_t
  
void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
  
int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n,m; cin>>n>>m;
    vector<ll> dorms, letters;
    ll tmp;
    while(n--) {cin>>tmp; dorms.push_back(tmp);}
    while(m--) {cin>>tmp; letters.push_back(tmp);}
    for(ll x: letters) {
        ll index=0, i=0;
        for(; i<dorms.size(); i++) {
            index += dorms[i];
            if(x<=index) {index=x-index+dorms[i]; break;}
        }
        cout<<i+1<<" "<<index<<"\n";
    }
}