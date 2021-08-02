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

        string enm, greg;
        cin>>enm>>greg;

        int out=0;

        for(int i=0; i<n; i++) {
            if(enm[i]=='0' && greg[i]=='1') {
                greg[i]='_';
                enm[i]='#';
                out++;
            }
        }

        if(greg[0]=='1' && enm[1]=='1') {
            out++;
            greg[0]='_';
            enm[1]='#';
        }

        if(greg[n-1]=='1' && enm[n-2]=='1') {
            out++;
            greg[n-1]='_';
            enm[n-2]='#';
        }

        for(int i=1; i<n-1; i++) {
            if(greg[i]=='1') {
                if(enm[i-1]=='1') {
                    out++;
                    enm[i-1]='#';
                    greg[i]='_';
                }
                else if(enm[i+1]=='1') {
                    out++;
                    enm[i+1]='#';
                    greg[i]='_';
                }
            }
        }
        cout<<out<<"\n";
    }
}