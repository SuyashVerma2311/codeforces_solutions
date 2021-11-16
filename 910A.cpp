#include<bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    FASTIO();
    int n,d; cin>>n>>d;
    string s; cin>>s;

    int curr = 0, jumps=0;

    while(curr < n-1 && jumps >=0) {
        for(int i=d; i>=0; i--) {
            int pos = curr + i;
            if(i==0) {
                jumps = -1;
                break;
            }
            if(pos >= n-1) {
                curr = n-1;
                jumps++;
                break;
            }
            if(s[pos] == '1') {
                curr = pos;
                jumps++;
                break;
            }
        }
    }
    cout<<jumps<<"\n";
}
