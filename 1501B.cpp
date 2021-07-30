#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n,tmp,k; cin>>n;
        vector<int> arr, cake(n,0);
        while(n--) {
            cin>>tmp;
            arr.push_back(tmp);
        }
        
        n = arr.size();
        tmp = n - arr[n-1];
        for(int i=n-1; i>=0; i--) {
            tmp = min(tmp, i+1-arr[i]);
            if(tmp <= i)
                cake[i] = 1;
        }
        for(int x: cake)
            cout<<x<<" ";
        cout<<"\n";
    }
}