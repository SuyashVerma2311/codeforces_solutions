#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int t; cin>>t;
    while(t--) {
        int n, tmp, ups=0, downs=0; cin>>n;
        while(n--) {
            cin>>tmp;
            if(tmp==1 || tmp==3) ups++;
        }
        cout<<ups<<endl;
    }
}