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
	int n, l, r, x;
	cin >> n >> l >> r >> x;
	vii c(n);
	for(int i = 0; i  < n; i++) cin >> c[i];
	sort(all(c));
	int p = 1 << n;
	int cnt = 0;
	for(ll i = 0; i < p; i++){
		ll s = 0, le = INT_MAX, ri = -1;
		for(ll j = 0; j < n; j++){
			if(i&(1<<j)) {
				s+=c[j];
				le = min(le,j);
				ri = max(ri,j);
			}
		}
		if( l <= s && s <= r && (c[ri] - c[le] >= x)) cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
