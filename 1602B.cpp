/************************************************************
 *		Author : TangyStone8, (a.k.a. Suyash_Verma)			*
 *				Last Updated : 22.04.2021					*
 ************************************************************/

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define deql deque<int>
#define prquel priority_queue<int>
#define SCD(x) scanf("%d",&x)
#define SCLD(x) scanf("%ld",&x)
#define SCLLD(x) scanf("%lld",&x)
#define SCC(x) scanf("%c",&x)
#define SCS(x) scanf("%s",x)
#define SCF(x) scanf("%f",&x)
#define SCLF(x) scanf("%lf",&x)
#define loop(i,n) for(int i=0; i<n; i++)
#define ITER(i,j,k,in) for(int i=j; i<k; i+=in)
#define RITER(i,j,k,in) for(int i=j; i>=k; i-=in)
#define ITERATE(it,a) for(it=a.begin();it!=a.end();it++)
#define RITERATE(it,a) for(it=a.rbegin();it!=a.rend();it++)
#define sortv(a) sort(a.begin(),a.end())
#define rsortv(a) sort(a.rbegin(),a.rend())
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define min_3(a,b,c) min(a,min(b,c))
#define min_4(a,b,c,d) min(mini(a,b,c),d)
#define max_3(a,b,c) max(a,max(b,c))
#define max_4(a,b,c,d) max(maxi(a,b,c),d)
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define PF push_front
#define br (printf("\n"))
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define inf 2e18

typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<vector<int>> VVI;
typedef vector<ll> VLL;
typedef unordered_map<int, int> UMAPII;
typedef unordered_map<string, int> UMAPSI;

int gcd(int a,int b) { if(a == 0)return b;return gcd(b % a, a);}
void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
ll fastModExp(ll a,ll b,ll m) {ll res=1;while(b>0){if(b&1)res=(res*a)%m;a=(a*a)%m;b=b>>1;}return res;}
ll fastExp(ll a,ll b) {ll res=1;while(b>0){if(b&1)res=res*a;a=a*a;b=b>>1;}return res;}
ll fact(ll n) {ll res = 1;for(int i=2;i<=n;i++)res=res*i;return res;}
ll nCr(ll n,ll r) {return fact(n)/(fact(r)*fact(n-r));}
ll nPr(ll n,ll r) {return fact(n)/fact(n-r);}

void solve(int t) {
	int testcases=t;
	while(t--) {
		int n; cin>>n;
		VI arr(n);

		for(int &x: arr)
			cin>>x;

		int q; cin>>q;
		int max_q = 0;
		VVI queries(q,{0,0});

		for(auto &v: queries) {
			cin>>v[0]>>v[1];
			max_q = max(max_q, v[1]);
		}

		max_q = min(max_q, int(ceil(log(n)))+5);

		map<int,int> hash;
		VVI store(max_q+1,arr);

		for(int i=1; i<=max_q; i++) {
			hash.clear();
			for(int x: store[i-1])
				hash[x]++;
			for(int j=0; j<n; j++)
				store[i][j] = hash[store[i-1][j]];
		}

		for(auto v: queries) {
			int tmp = v[1];
			if(v[1] > max_q)
				tmp = max_q;
			cout<<store[tmp][v[0]-1]<<endl;
		}
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