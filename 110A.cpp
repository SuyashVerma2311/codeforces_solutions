#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    int luck=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='4' || s[i]=='7')
            luck++;
    }
    string l = to_string(luck);
    for(int i=0; i<l.size(); i++)
        if(l[i]!='4' && l[i]!='7') {
            cout<<"NO\n";
            return 0;
        }
    cout<<"YES\n";
    return 0;
}
