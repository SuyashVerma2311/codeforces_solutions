#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    string s; cin>>s;

    string k(10, '0');

    for(char c: s) {
        if(c=='L')
            for(int i=0; i<10; i++)
                if(k[i] == '0') {
                    k[i] = '1';
                    break;
                }

        if(c=='R')
            for(int i=9; i>=0; i--)
                if(k[i] == '0') {
                    k[i] = '1';
                    break;
                }

        if(int(c-'0') <= 9)
            k[c-'0'] = '0';
    }

    cout<<k<<"\n";
}