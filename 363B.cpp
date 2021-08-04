#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n,k; cin>>n>>k;
    vector<int> arr(n);
    for(int &x: arr)
        cin>>x;

    int sum=0, min_sum=INT_MAX, min_i=0, j=0;

    for(int i=0; i<k; i++)
        sum += arr[i];

    while(j+k <= n) {
        if(sum < min_sum) {
            min_sum = sum;
            min_i = j;
        }
        sum += arr[j+k];
        sum -= arr[j];
        j++;
    }

    cout<<min_i+1<<"\n";
}