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
        int n,tmp; cin>>n;
        vector<int> arr;
        while(n--) {cin>>tmp; arr.push_back(tmp);}
        long long sum=0;
        for(int x: arr) {
            sum = max(0LL, sum+x);
        }
        cout<<sum<<"\n";
    }
}