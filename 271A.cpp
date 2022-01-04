#include <bits/stdc++.h>
using namespace std;

void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}

int main() {
    FASTIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int y; cin>>y;
    string s;
    int cont = y+1;
    while(1) {
        s = to_string(cont);
        bool real = true;
        for(int i=0; i<4; i++)
            for(int j=0; j<i; j++)
                if(s[i]==s[j])
                    real = false;
        if(real) {
            cout<<cont<<endl;
            break;
        }
        cont++;
    }
}
