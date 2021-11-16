#include<bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    FASTIO();

    int n,k; cin>>n>>k;
    vector<int> arr(n);

    for(int &x: arr)
        cin>>x;

    int out = 0, tmp;

    for(int i=1; i<n; i++) {
        tmp = max(0,k-arr[i]-arr[i-1]);
        out += tmp;
        arr[i] += tmp;
    }

    cout<<out<<"\n";
    for(int x: arr)
        cout<<x<<" ";
}
