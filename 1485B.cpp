#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, q, k;
    cin>>n>>q>>k;

    vector<int> a(n);
    for (int &x: a)
        cin>>x;

    while(q--) {
        int l, r;
        cin>>l>>r;
        cout<<k+(a[r-1]-a[l-1]+1)-2*(r-l+1)<<"\n";
    }
}