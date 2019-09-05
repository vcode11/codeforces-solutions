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
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	pll st[n+1][26];
	int LOG[n+5];
	LOG[1] = 0;
	for(int i = 2; i < n+5; i++){
		LOG[i] = 1 + LOG[i/2];
	}
	for(int i = 0; i < n; i++){
		cin >> st[i][0].ff;
		st[i][0].ss = 0;
	}
	for(ll i = 1; i <= LOG[n+1]; i++){
		for(ll j = 0; j + (1 << i) <= n; j++){
			st[j][i].ff = st[j][i-1].ff + st[j+(1<<(i-1))][i-1].ff;
			st[j][i].ss = st[j][i-1].ss + st[j + (1<<(i-1))][i-1].ss + (st[j][i].ff >= 10);
			st[j][i].ff %= 10;	
		}
	}
	int q;
	cin >> q;
	while(q--){
		int l,r ;
		cin >> l >> r;
		l--;
		r--;
		int v = LOG[r-l+1];
		cout << st[l][v].ss << "\n";
	}
	return 0;
}
