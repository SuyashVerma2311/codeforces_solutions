    /************************************************************
     *		Author : TangyStone8, (a.k.a. Suyash_Verma)			*
     *				Last Updated : 24.05.2021					*
     ************************************************************/
     
    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long
     
    void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
     
    void solve(int t) {
        int testcases=t;
        while(t--) {
            ll n,x,k; cin>>n>>x>>k;
            if(k<x) cout<<"0\n";
            else if((k/x)<n) cout<<(((k/x)*((k/x)+1)/2)+((k/x)*(n-1-(k/x))))<<"\n";
            else cout<<(n*(n-1)/2)<<"\n";
        }
    }
     
    main() {
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w",stdout);
        #endif
        FASTIO();
        int t=1; cin>>t;
        solve(t);
        return 0;
    }