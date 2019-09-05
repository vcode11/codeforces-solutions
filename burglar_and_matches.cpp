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
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	ll n, m;
	cin >> n >> m;
	vpll v(m);
	for(int i = 0; i < m; i++) cin >> v[i].ss >> v[i].ff;
	sort(all(v));reverse(all(v));
	ll cnt = 0, take = 0;
	ll i = 0;
	while(take <= n && i < m){
		if(take + v[i].ss <= n){
			take+=v[i].ss;
			cnt+=v[i].ss*v[i].ff;
		}
		else{
			ll tmp = n-take;
			take = n;
			cnt+=tmp*v[i].ff;
			break;
		}
		i++;
	}
	cout << cnt << "\n";
	return 0;
}
