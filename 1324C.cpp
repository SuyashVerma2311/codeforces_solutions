#include <bits/stdc++.h>
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

        int max_len=0, len=0;

        for(char c: s) {
            if(c=='L')
                len++;
            else
                len = 0;

            max_len = max(max_len, len);
        }

        cout<<max_len+1<<"\n";
    }
}