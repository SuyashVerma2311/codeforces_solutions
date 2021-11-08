#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n; cin>>n;
    vector<int> arr(n);

    for(int &x: arr)
        cin>>x;

    sort(arr.begin(), arr.end());

    cout<< int((n-0.5)/2)<<"\n";

    for(int i=0; i<n/2; i++)
        cout<<arr[n/2 + i]<<" "<<arr[i]<<" ";

    if(n%2 == 1)
        cout<<arr[n - 1];
}