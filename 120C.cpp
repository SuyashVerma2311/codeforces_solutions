#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w",stdout);

    int n,k; cin>>n>>k;
    vector<int> arr(n);

    for(int &x: arr)
        cin>>x;

    int out = 0;

    for(int i=0; i<n; i++) {
        if(arr[i]/k >= 3)
            out += (arr[i] - 3*k);

        if(arr[i]/k == 2)
            out += (arr[i] - 2*k);

        if(arr[i]/k == 1)
            out += (arr[i] - k);

        if(arr[i] < k)
            out += arr[i];
    }

    cout<<out;
}