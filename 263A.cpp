#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    vector<vector<int>> mat(5,vector<int>(5,0));
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++) {
            int tmp; cin>>tmp;
            if(tmp) {
                cout<<abs(i-2)+abs(j-2)<<endl;
                break;
            }
        }
}
