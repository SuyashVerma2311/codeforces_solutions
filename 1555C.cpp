#include <bits/stdc++.h>
using namespace std;

#define ITER(i,j,k,in) for(int i=j; i<k; i+=in)
#define RITER(i,j,k,in) for(int i=j; i>=k; i-=in)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; cin>>t;
    while(t--) {
        int n, tmp, sum1=0, sum2=0; cin>>n;
        vector<int> row1(n), row2(n), row1_sums(n), row2_sums(n);

        ITER(i,0,n,1) {
            cin>>tmp;
            row1[i] = tmp;
            sum1 += tmp;
            row1_sums[i] = sum1;
        }
        ITER(i,0,n,1) {
            cin>>tmp;
            row2[i] = tmp;
        }
        RITER(i,n-1,0,1) {
            sum2 += row2[i];
            row2_sums[i] = sum2;
        }

        int alice=row1_sums[0]+row2_sums[0], alice_i=0;

        for(int i=1; i<n; i++) {
            int a = max(row1_sums[n-1]-row1_sums[alice_i], row2_sums[0]-row2_sums[alice_i]);
            int b = max(row1_sums[n-1]-row1_sums[i], row2_sums[0]-row2_sums[i]);
            if(b < a) {
                alice = row1_sums[i]+row2_sums[i];
                alice_i = i;
            }
        }

        int bob = max(row1_sums[n-1]-row1_sums[alice_i], row2_sums[0]-row2_sums[alice_i]);

        cout<<bob<<"\n";        
    }
}