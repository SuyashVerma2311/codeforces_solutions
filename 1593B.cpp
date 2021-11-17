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
		string s; cin>>s;
		int n = s.size();

		int ult = n-1;
		int pult = n-2;

		int ans1 = 0;
		int ans2 = 0;

		bool set1 = true;
		while(s[ult]!='0' && ult > 1) {
			ult--;
			set1 = true;
			ans1++;
		}
		if(s[ult] != '0')
			set1 = false;
		else {
			pult = ult-1;
			while(s[pult]!='5' && s[pult]!='0' && pult > 0) {
				pult--;
				ans1++;
				set1 = true;
			}
			if(s[pult] != '5' && s[pult] !='0')
				set1 = false;
		}

		ult = n-1;
		pult = n-2;

		bool set2 = true;
		while(s[ult]!='5' && ult > 1) {
			ult--;
			set2 = true;
			ans2++;
		}
		if(s[ult] != '5')
			set2 = false;
		else {
			pult = ult-1;
			while(s[pult]!='2' && s[pult]!='7' && pult > 0) {
				pult--;
				ans2++;
				set2 = true;
			}
			if(s[pult]!='2' && s[pult]!='7')
				set2 = false;
		}

		if(set1 && set2)
			cout<<min(ans1,ans2)<<endl;
		else if(set1)
			cout<<ans1<<endl;
		else if(set2)
			cout<<ans2<<endl;
		else
			cout<<-1<<endl;
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
