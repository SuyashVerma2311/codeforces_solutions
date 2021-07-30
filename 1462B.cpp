#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        
        bool a = (s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0');
        bool b = (s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0' && s[n-4]=='2');
        bool c = (s[0]=='2' && s[1]=='0' && s[n-1]=='0' && s[n-2]=='2');
        bool d = (s[0]=='2' && s[n-1]=='0' && s[n-2]=='2' && s[n-3]=='0');
        bool e = (s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0');

        if(a || b || c || d|| e)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}