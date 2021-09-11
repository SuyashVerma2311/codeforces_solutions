#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;

        string out="";

        for(char c: s) {
            if(c=='L' || c=='R')
                out += c;

            if(c=='U')
                out += 'D';

            if(c=='D')
                out += 'U';
        }
        cout<<out<<"\n";
    }
}