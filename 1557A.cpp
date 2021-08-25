#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout<<fixed<<setprecision(9);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;

        int max_ = INT_MIN, sum=0;
        vector<int> arr(n);
        for(int &x: arr) {
            cin>>x;
            sum += x;
            max_ = max(x, max_);
        }

        sum -= max_;

        cout<<(max_ + (1.0*sum/(n-1)))<<"\n";
    }
}