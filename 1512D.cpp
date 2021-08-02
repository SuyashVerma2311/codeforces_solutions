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
        vector<int> arr(n+2), out;
        unordered_map<int, int> hash;
        int sum=0;
        bool found = false, a_done=false, b_done=false;
        for(int &x: arr) {
            cin>>x;
            hash[x]++;
            sum+=x;
        }
        int a, b;
        
        for(int x: arr) {
            if(hash.find(sum-x-x)!=hash.end() && (sum!=3*x || hash[sum-x-x]>=2) && !found) {
                a = sum-x-x;
                b = x;
                found = true;
            }
        }

        if(found) {
            for(int x: arr) {
                if (!a_done && x==a)
                    a_done = true;
                else if(!b_done && x==b)
                    b_done = true;
                else
                    cout<<x<<" ";
            }
        }
        else{
            cout<<"-1";
        }
        cout<<"\n";
    }
}