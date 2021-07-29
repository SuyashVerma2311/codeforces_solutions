#include <bits/stdc++.h>

using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w",stdout);
	#endif
	int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        cout<<(n+1)/10<<"\n";
    }
}