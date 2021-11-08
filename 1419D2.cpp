#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n,cnt=0; cin>>n;
    vector<int> arr(n), new_arr(n);

    for(int &x: arr)
        cin>>x;

    sort(arr.begin(), arr.end());

    for(int i=0; i<n/2; i++) {
        new_arr[i*2] = arr[n/2+i];
        new_arr[i*2+1] = arr[i];
    }
    if(n%2 == 1)
        new_arr[n-1] = arr[n-1];

    for(int i=1; i<n-1; i++)
        if(new_arr[i-1] > new_arr[i] && new_arr[i+1] > new_arr[i])
            cnt++;

    cout<<cnt<<"\n";

    for(int x: new_arr)
        cout<<x<<" ";
}