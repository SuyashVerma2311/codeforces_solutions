#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main(){
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        if(n>=3) {
            cout<<"2\n"<<n<<" "<<n-2<<"\n"<<n-1<<" "<<n-1<<"\n";
            n -= 3;
            while(n--) {
                cout<<n+3<<" "<<n+1<<"\n";
            }
        }
        else {cout<<"2\n1 2\n";}
    }
}