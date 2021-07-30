#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll fastExp(ll a,ll b) {ll res=1;while(b>0){if(b&1)res=res*a;a=a*a;b=b>>1;}return res;}

int main() {
    int n;
    cin>>n;
    if(n%2==0)
        cout<<fastExp(2,n/2);
    else
        cout<<0;
}