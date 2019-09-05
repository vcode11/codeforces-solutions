#include <bits/stdc++.h>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector <ll>
#define vii vector <int>
#define vpii vector <pii>
#define vpll vector <pll>
#define ff first
#define ss second
#define matrix vector <vll>
#define all(v) v.begin(),v.end()
#define PQ priority_queue
using namespace std;
ll pow(ll a, ll b){
	ll res = 1;
	while(b > 0){
		if(b&1) res*=a;
		b/=2;
		a*=a;
	}
	return res;
}
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	ll n, m;
	cin >> n >> m;
	vpll row(n), col(m);
	for(auto &p: row){
		p.ff = 0;p.ss = 0;
	}
	for(auto &p: col){
		p.ff = p.ss = 0;
	}
	for(int i = 0; i  < n; i++){
		for(int j = 0; j < m; j++){
			int x;
			cin >> x;
			if(x){
				row[i].ff++;
				col[j].ff++;
			}
			else {
				row[i].ss++;
				col[j].ss++;
			}
		}
	}
	ll cnt = 0;
	for(auto p: row){
		cnt+=(1ll << p.ff) - 1;
		cnt+=(1ll << p.ss) - 1;
	}
	for(auto p : col){
		cnt-=2;
		cnt+=(1ll<< p.ff) - p.ff;
		cnt+=(1ll<< p.ss) - p.ss;
	}
	cout << cnt << "\n";
	return 0;
}
