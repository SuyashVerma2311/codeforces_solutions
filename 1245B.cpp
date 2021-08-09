#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a,b,c; cin>>a>>b>>c;
        string bob; cin>>bob;

        int out = 0;
        string alice="";

        for(char x: bob) {
            if(x=='R' && b>0) {
                b--;
                out++;
                alice += "P";
            }
            else if(x=='P' && c>0) {
                c--;
                out++;
                alice += "S";
            }
            else if(x=='S' && a>0) {
                a--;
                out++;
                alice += "R";
            }
            else
                alice += "_";
        }

        for(char &x: alice) {
            if(a>0 && x == '_') {
                x = 'R';
                a--;
            }
            else if(b>0 && x == '_') {
                x = 'P';
                b--;
            }
            else if(c>0 && x == '_') {
                x = 'S';
                c--;
            }
        }

        if(out >= round(1.0*n/2))
            cout<<"YES\n"<<alice<<"\n";
        else
            cout<<"NO\n";
    }
}