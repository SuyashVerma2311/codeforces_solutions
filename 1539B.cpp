/************************************************************
 *		Author : TangyStone8, (a.k.a. Suyash_Verma)			*
    *				Last Updated : 25.04.2021					*
    ************************************************************/
    
#include <bits/stdc++.h>
    
using namespace std;
    
void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
    
void solve() {
    int n, q; cin>>n>>q;
    string s; cin>>s;
    vector<vector<int>> data;
    vector<int> temp(26, 0);
    data.push_back(temp);
    for(int i=0; i<s.length(); i++) {
        temp[int((char)s[i]-97)]++;
        data.push_back(temp);
    }
    while(q--) {
        int l, r; cin>>l>>r;
        int sum = 0;
        for(int i=0; i<26; i++) sum += (data[r][i]-data[l-1][i])*(i+1);
        cout<<sum<<"\n";
    }
}
    
main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w",stdout);
    #endif
    FASTIO();
    solve();
    return 0;
}