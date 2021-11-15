#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

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

    int cnt=0,day=1;

    for(int i=0; i<n; i++) {
        if(arr[i] >= day){
            cnt++;
            day++;
        }
    }

    cout<<cnt<<"\n";
}
