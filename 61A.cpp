#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1; cin>>s1;
    string s2; cin>>s2;

    string out(s1.size(),'0');
    for(int i=0; i<s1.size(); i++)
        out[i] = ((s1[i]-'0')^(s2[i]-'0'))+'0';
    cout<<out<<endl;
}
