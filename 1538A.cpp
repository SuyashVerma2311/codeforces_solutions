/************************************************************
 *		Author : TangyStone8, (a.k.a. Suyash_Verma)			*
 *				Last Updated : 22.04.2021					*
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;
void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

void solve(int t) {
	int testcases=t;
	while(t--) {
        int n; cin>>n;
        vector<int> arr;
        int tmp;
        while(n--) {
            cin>>tmp;
            arr.push_back(tmp);
        }
        n = arr.size();
        int min_=INT_MAX, max_=INT_MIN, max_loc=0, min_loc=0, out=0;
        for(int i=0; i<n; i++) {
            if(min_ > arr[i]) {
                min_ = arr[i];
                min_loc = i;
            }
            if(max_ < arr[i]) {
                max_ = arr[i];
                max_loc = i;
            }
        }
        int a = min(min_loc+1, max_loc+1), b = min(n-min_loc, n-max_loc), c = abs(min_loc - max_loc);
        cout<<(a+b+c)-max(a,max(b,c))<<"\n";
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