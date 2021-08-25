#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin>>t;
    while(t--) {
        ll k; cin>>k;

        ll ring = 1 + (ll)(sqrt(k-1));
        ll i = min(ring, 1 + k - (1+(ring-1)*(ring-1)));
        ll j = min(ring, 1 + (ring*ring) - k);

        cout<<i<<" "<<j<<"\n";
    }
}