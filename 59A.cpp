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

    int low=0, high=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] <= 'z' && s[i] >= 'a')
            low++;
        if(s[i] <= 'Z' && s[i] >= 'A')
            high++;
    }

    for(int i=0; i<s.size(); i++) {
        if(low >= high && s[i] <= 'Z' && s[i] >= 'A')
            s[i] = s[i] - 'A' + 'a';
        if(low < high && s[i] <= 'z' && s[i] >= 'a')
            s[i] = s[i] + 'A' - 'a';
    }
    cout<<s<<endl;
}
