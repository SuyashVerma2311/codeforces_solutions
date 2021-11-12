#include <bits/stdc++.h>
using namespace std;

#define ll long long
    
void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
ll fastExp(ll a,ll b) {ll res=1;while(b>0){if(b&1)res=res*a;a=a*a;b=b>>1;}return res;}
    
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w",stdout);
    #endif
    FASTIO();
    
    int n; cin>>n;

    if(n < 3) {
        cout<<"-1";
        return 0;
    }

    if(n == 3) {
        cout<<"210";
        return 0;
    }

    vector<string> outs{"000","050","080","170","020","200","110"};

    string s(n-3,'0');
    s[0] = '1';

    n = (n+3)%6;
    if(n==0)
        n = 6;

    cout<<s<<outs[n];
}