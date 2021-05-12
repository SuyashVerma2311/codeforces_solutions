#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string s,s_tmp,s_bck; cin>>s;
    s_tmp = s; s_bck = s;
    bool all=true;
    for(int i=0;i<s.length();i++) {
        if(!(s[i]>=65 && s[i]<=90)) {all=false; break;}
        else s_tmp[i] += 32;
    }
    if(all) {cout<<s_tmp<<"\n"; return 0;}
    all = true;
    if(s_bck[0]>=97 && s_bck[0]<=122) s_bck[0]-=32;
    for(int i=1;i<s.length();i++) {
        if(!(s[i]>=65 && s[i]<=90)) {all=false; break;}
        else s_bck[i] += 32;
    }
    if(all) {cout<<s_bck<<"\n"; return 0;}
    cout<<s<<"\n";
}