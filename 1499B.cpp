#include <iostream>
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
        string s; cin>>s;
        bool adj_1=false, out=true;

        for(int i=0; i<s.length()-1; i++) {
            if(s[i]=='1' && s[i+1]=='1')
                adj_1 = true;

            if(s[i]=='0' && s[i+1]=='0' && adj_1){
                out=false;
                break;
            }
        }

        if(out)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}