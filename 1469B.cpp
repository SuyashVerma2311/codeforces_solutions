#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n,m,tmp, sum_red=0, sum_blue=0;
        vector<int> red, blue;
        cin>>n;
        while(n--) {
            cin>>tmp; red.push_back(tmp);
        }
        cin>>m;
        while(m--) {
            cin>>tmp; blue.push_back(tmp);
        }
        tmp = 0;
        for(int x: red) {
            tmp += x;
            sum_red = max(sum_red, tmp);
        }
        tmp = 0;
        for(int x: blue) {
            tmp += x;
            sum_blue = max(sum_blue, tmp);
        }
        cout<<sum_blue+sum_red<<"\n";
    }
}