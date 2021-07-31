#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        string s1 = s, s2 = s;
        
        for(int i=0; i<10; i++) {
            if(i%2==0 && s[i]=='?') {
                s1[i] = '1';
                s2[i] = '0';
            }
            if(i%2!=0 && s[i]=='?') {
                s1[i] = '0';
                s2[i] = '1';
            }
        }


        int team1=0, team2=0, out=10;
        for(int i=0; i<10; i++) {
            if(i%2==0) {
                team1 += int(s1[i]-'0');

                if((8-i)/2 < (team2-team1) || (10-i)/2 < (team1-team2)) {
                    out = min(out, i+1);
                    break;
                }
            }
            else {
                team2 += int(s1[i]-'0');

                if((9-i)/2 < abs(team2-team1)) {
                    out = min(out, i+1);
                    break;
                }
            }
        }

        team1 = 0, team2 = 0;

        for(int i=0; i<10; i++) {
            if(i%2==0) {
                team1 += int(s2[i]-'0');

                if((8-i)/2 < (team2-team1) || (10-i)/2 < (team1-team2)) {
                    out = min(out, i+1);
                    break;
                }
            }
            else {
                team2 += int(s2[i]-'0');

                if((9-i)/2 < abs(team2-team1)) {
                    out = min(out, i+1);
                    break;
                }
            }
        }
        
        cout<<out<<"\n";
    }
}