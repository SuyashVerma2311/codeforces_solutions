#include <bits/stdc++.h>
using namespace std;

void solve(int w, int h, int room_w, int room_h, int x1, int y1, int x2, int y2) {
    if(h <= max(room_h-y2, y1) || w <= max(room_w-x2, x1)){
        cout<<0.0<<"\n";
        return;
    }
    if(y1+room_h-y2 >= h && x1+room_w-x2 >= w) {
        int a = min(h-y1, h-room_h+y2);
        int b = min(w-x1, w-room_w+x2);
        cout<<min(a,b)<<"\n";
        return;
    }
    if(y1+room_h-y2 >= h) {
        cout<<min(h-y1, h-room_h+y2)*1.0<<"\n";
        return;
    }
    if(x1+room_w-x2 >= w) {
        cout<<min(w-x1, w-room_w+x2)*1.0<<"\n";
        return;
    }
    cout<<-1<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout<<fixed<<setprecision(9);

    int t; cin>>t;
    while(t--) {
        int room_w, room_h;
        cin>>room_w>>room_h;

        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;

        int w,h; cin>>w>>h;

        solve(w,h,room_w,room_h,x1,y1,x2,y2);
    }
}