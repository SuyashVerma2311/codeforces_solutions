#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w",stdout);
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        for(int i=0; i<n; i++) {
            if(s[i]=='(' && s[i+1]==')') {
                s.erase(i,2);
                i -= 2;
                n -= 2;
            }
        }
        cout<<n/2<<"\n";
    }
}