#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr) {
    if(arr.size()==0) {
        cout<<"-1\n";
        return;
    }
    if(arr.size()==1) {
        if(arr[0]%2==0) cout<<"1\n1\n";
        else cout<<"-1\n";
        return;
    }
    int odd_1=-1;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2==0) {
            cout<<"1\n"<<i+1<<"\n";
            return;
        }
        if(odd_1==-1) odd_1 = i+1;
        else{
            cout<<"2\n"<<odd_1<<" "<<i+1<<"\n";
            return;
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n,tmp; cin>>n;
        vector<int> arr;
        while(n--) {
            cin>>tmp;
            arr.push_back(tmp);
        }
        solve(arr);
    }
}