#include <bits/stdc++.h>
using namespace std;

int XOR(int n) {
    int k = n%4;
    if(k == 1)
        return 1;
    if(k == 2)
        return n+1;
    if(k == 3)
        return 0;
    return n;
}

void solve(int a, int b) {
    int pre = XOR(a-1);

    if(pre == b) {
        cout<<a<<"\n";
        return;
    }

    int k = pre ^ b;

    if(k == a) {
        cout<<a+2<<"\n";
        return;
    }


    cout<<a+1<<"\n";

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
        int a,b; cin>>a>>b;

        solve(a, b);
    }
}