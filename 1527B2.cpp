#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int a=0, b=0;
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-i-1]&&s[i]=='0') b++;
            else if(s[i]!=s[n-i-1]) a++;
        }
        if(n%2==1&&s[n/2]=='0') a++;
        if(a==0) cout<<"BOB"<<endl;
        else {
            if(b==0&&n%2==1&&s[n/2]=='0') {
                if(a==1) cout<<"BOB"<<endl;
                else if(a==2) cout<<"DRAW"<<endl;
                else cout<<"ALICE"<<endl;
            }
            else cout<<"ALICE"<<endl;
        }
    }
}