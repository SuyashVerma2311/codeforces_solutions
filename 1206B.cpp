#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n; cin>>n;
    long long int tmp, neg_cnt=0, out=0, zero_cnt=0;
    while(n--) {
        cin>>tmp;
        if(tmp>1)
            out += tmp - 1;
        else if(tmp < -1) {
            out += abs(tmp) - 1;
            neg_cnt++;
        }
        else if(tmp == 0) {
            zero_cnt++;
            out++;
        }
        else if(tmp == -1)
            neg_cnt++;
    }
    if(neg_cnt%2!=0 && zero_cnt==0) 
         out += 2;

    cout<<out;
}