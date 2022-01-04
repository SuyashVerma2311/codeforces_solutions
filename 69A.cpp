#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
	FASTIO();
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n; cin>>n;
	vector<int> xs(n), ys(n), zs(n);

	for(int i=0; i<n; i++)
		cin>>xs[i]>>ys[i]>>zs[i];

	int sumx = accumulate(xs.begin(),xs.end(),0);
	int sumy = accumulate(ys.begin(),ys.end(),0);
	int sumz = accumulate(zs.begin(),zs.end(),0);

	if(!sumx && !sumy && !sumz)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
