#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n; cin>>n;

    int max_len=0, len=0, prev=INT_MIN;

    while(n--) {
        int x;
        cin>>x;
        if(x>prev)
            len++;
        else
            len=1;

        prev = x;
        max_len = max(max_len, len);
    }
    cout<<max_len;
}
