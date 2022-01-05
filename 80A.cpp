#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for(int i=0; i<primes.size()-1; i++) {
        if(n == primes[i])
            if(primes[i+1]==m) {
                cout<<"YES\n";
                return 0;
            }
            else {
                cout<<"NO\n";
                return 0;
            }
    }
    cout<<"NO\n";
    return 0;
}
