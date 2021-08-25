#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c) {
    int size = abs(a-b)*2;
    if(c > size || a > size || b > size) {
        cout<<"-1\n";
        return;
    }
    if(c == abs(a-b)) {
        cout<<2*c<<"\n";
        return;
    }
    if(c < abs(a-b)) {
        cout<<c + abs(a-b)<<"\n";
        return;
    }
    if(c > abs(a-b)) {
        cout<<c - abs(a-b)<<"\n";
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin>>t;
    while(t--) {
        int a,b,c; cin>>a>>b>>c;

        solve(a,b,c);
    }
}   