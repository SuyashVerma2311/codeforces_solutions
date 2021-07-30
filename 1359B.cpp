#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        int n,m,x,y; cin>>n>>m>>x>>y;
        char grid[n][m];
        char tmp;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin>>tmp;
                grid[i][j] = tmp;
            }
        }
        int price0=0, price1=0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == '.') {
                    if(j<m-1 && grid[i][j+1]=='.') {
                        price1 += y-x;
                        price0 += x;
                        grid[i][j+1] = '@';
                    }
                    price0 += x;
                    price1 += x;
                    grid[i][j] = '#';
                }
            }
        }
        cout<<min(price0, price1)<<"\n";
    }
}