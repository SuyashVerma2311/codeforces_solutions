#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int z=0;
        for(char c: s) z+=(c=='0');
        if(z==1 || z%2==0) cout<<"BOB\n";
        else cout<<"ALICE\n";
    }
}