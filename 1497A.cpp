#include <bits/stdc++.h>
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
        vector<int> arr(n), out(n);
        for(auto &x: arr)
            cin>>x;

        sort(arr.begin(), arr.end());
        
        out[0] = arr[0];

        int low=1, high=n-1;
        for(int i=1; i<n; i++) {
            if(arr[i]== out[low-1]) {
                out[high] = arr[i];
                high--;
            }
            else {
                out[low] = arr[i];
                low++;
            }
        }
        for(int x: out)
            cout<<x<<" ";
        
        cout<<"\n";
    }
}