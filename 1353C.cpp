#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w",stdout);
	#endif
    int t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        n = n/2;
        cout<<(4*n*(n+1)*(2*n+1)/3)<<"\n";
    }
}