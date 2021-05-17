#include <bits/stdc++.h>
using namespace std;

#define PB push_back

typedef vector<int> VI;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

void solve(int t) {
	int testcases=t;
	while(t--) {
        int n,tmp; cin>>n;
        VI arr;
        bool order=true;
        while(n--) {
            cin>>tmp;
            arr.PB(tmp);
            if(tmp!=arr.size()) order=false;
        }
        if(order) cout<<"0\n";
        else if(arr[0]==arr.size() && arr[arr.size()-1]==1) cout<<"3\n";
        else if(arr[0]==1 || arr[arr.size()-1]==arr.size()) cout<<"1\n";
        else cout<<"2\n";
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