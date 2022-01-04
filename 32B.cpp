#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    string s; cin>>s;
    string out = "";
    int ptr = 0;

    while(ptr < s.size()) {
        if(s[ptr] == '.')
            out += '0';
        else {
            ptr++;
            if(s[ptr]=='.')
                out += '1';
            else
                out += '2';
        }
        ptr++;
    }
    cout<<out<<endl;
}
