#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b) { if(a == 0)return b;return gcd(b % a, a);}
void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}


void solve(int t) {
	int testcases=t;
	while(t--) {
        int k,l,m; cin>>k;
        l=100-k;
        m=gcd(k,l);
        k/=m;
        l/=m;
        cout<<k+l<<"\n";
	}
}

main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w",stdout);
	#endif
	FASTIO();
	int t=1; cin>>t;
	solve(t);
	return 0;
}