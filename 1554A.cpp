#include <iostream>
#include <limits.h>
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
        int n; cin>>n;
        long long int a,b, out=INT_MIN;
        cin>>a;
        while(--n) {
            cin>>b;
            out = max(out, a*b);
            a = b;
        }
        cout<<out<<"\n";
    }
}