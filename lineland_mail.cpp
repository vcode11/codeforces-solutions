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
	//cin.tie(0)
	int n;
	cin >> n;
	vii v(n); vpll d(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	for(int i = 1; i < n-1; i++){
		d[i].ff = max(v[i]-v[0],v[n-1]-v[i]);
		d[i].ss = min(v[i]-v[i-1],v[i+1]-v[i]);
	}
	d[0].ff = v[n-1] - v[0];
	d[0].ss = v[1]-v[0];
	d[n-1].ff = d[0].ff;
	d[n-1].ss = v[n-1]-v[n-2];
	for(auto p: d) cout << p.ss << " " << p.ff << "\n";
	return 0;
}
