#include "bits/stdc++.h"

using namespace std;

void FASTIO() {ios_base::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int x=INT_MAX, pos=-1;
        for (int i=0;i<n;++i) {
            int a; cin>>a;
            if(a<x)x=a,pos=i;
        }
        cout<<n-1<<endl;
        for (int i=0;i<n;++i) {
            if (i == pos) continue;
            cout<<pos+1<<" "<<i+1<<" "<< x <<" "<< x+abs(i-pos)<<"\n";
        }
    }
}