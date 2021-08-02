#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        if(n==5) cout<<"2 4\n";
        else if(n==11) cout<<"2 5\n";
        else {
            if((n-1)%3==0)
                cout<<min((n-1)/3, 1ll*3)<<" "<<max((n-1)/3, 1ll*3)<<"\n";
            else
                cout<<min((n-2)/3, 1ll*3)<<" "<<max((n-2)/3, 1ll*3)<<"\n";
        }
    }
}