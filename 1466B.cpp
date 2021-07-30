#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n,tmp; cin>>n;
        vector<int> arr;
        unordered_map<int, int> hash;
        while(n--) {
            cin>>tmp;
            if(hash[tmp] == 0) {
                arr.push_back(tmp);
                hash[tmp]++;
            }
            else if(hash[tmp+1] == 0) {
                hash[tmp+1]++;
                arr.push_back(tmp+1);
            }
        }
        cout<<arr.size()<<"\n";
    }
}