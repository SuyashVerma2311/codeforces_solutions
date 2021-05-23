#include <iostream>
using namespace std;

#define ll long long

int main() {
    int t; cin>>t;
    while(t--) {
        ll a,b; cin>>a>>b;
        b==1 ? cout<<"NO\n" : cout<<"YES\n"<<a<<" "<<a*b<<" "<<a*(b+1)<<"\n";
    }
}