#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();

    int n,m; cin>>n>>m;
    vector<int> grps(n);

    for(int &x: grps)
        cin>>x;

    int out = 1, ptr = 0, temp=0;

    while(ptr < n) {
        if(temp + grps[ptr] <= m)
            temp += grps[ptr];

        else {
            temp = grps[ptr];
            out++;
        }
        ptr++;
    }

    cout<<out<<endl;
}