#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w",stdout);
	#endif
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        if(log2(n) == int(log2(n))) cout<<(n-1)<<"\n";
        else cout<<(int(pow(2, floor(log2(n))))-1)<<"\n";
    }
}