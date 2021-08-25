#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vector<int> data;
    int cnt = 1;

    while(data.size() <= 1000) {
        if(cnt%3!=0 && cnt%10!=3)
            data.push_back(cnt);
            
        cnt++;
    }


    int t; cin>>t;
    while(t--) {
        int k; cin>>k;
        cout<<data[k-1]<<"\n";
    }
}