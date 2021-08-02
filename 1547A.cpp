#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin>>t;
    while(t--) {
        int xa,ya,xb,yb,xf,yf;
        cin>>xa>>ya;
        cin>>xb>>yb;
        cin>>xf>>yf;

        if(xa!=xb && ya!=yb)
            cout<<abs(xa-xb)+abs(ya-yb)<<"\n";
        
        if(xa==xb && ya!=yb)
            if(xf==xa && yf<max(ya,yb) && yf>min(ya,yb))
                cout<<abs(ya-yb)+2<<"\n";
            else
                cout<<abs(ya-yb)<<"\n";

        if(xa!=xb && ya==yb)
            if(yf==ya && xf<max(xa,xb) && xf>min(xa,xb))
                cout<<abs(xa-xb)+2<<"\n";
            else
                cout<<abs(xa-xb)<<"\n";

        if(xa==xb && ya==yb)
            cout<<"0\n";
    }
}