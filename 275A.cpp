#include <bits/stdc++.h>
using namespace std;
void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    vector<vector<int>> mat(3,vector<int>(3,0));
    vector<vector<bool>> lights(3,vector<bool>(3,true));

    for(auto &v: mat)
        for(int &x: v)
            cin>>x;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(mat[i][j]%2) lights[i][j] = !lights[i][j];
            if(i!=0)
                if(mat[i-1][j]%2) lights[i][j] = !lights[i][j];
            if(i!=2)
                if(mat[i+1][j]%2) lights[i][j] = !lights[i][j];
            if(j!=0)
                if(mat[i][j-1]%2) lights[i][j] = !lights[i][j];
            if(j!=2)
                if(mat[i][j+1]%2) lights[i][j] = !lights[i][j];
        }
    }

    for(auto v: lights) {
        for(int x: v)
            cout<<x;
        cout<<endl;
    }
}
