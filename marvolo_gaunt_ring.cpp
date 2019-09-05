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
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, p, q, r;
	cin >> n >> p >> q >> r;
	ll a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	vll dp1(n), dp2(n), dp3(n);
	dp1[0] = p*a[0];
	for(int i = 1; i < n; i++) dp1[i] = max(dp1[i-1],p*a[i]);
	dp2[0] = p*a[0] + q*a[0];
	for(int i = 1; i < n; i++){
		dp2[i] = max(dp2[i-1], dp1[i] + q*a[i]);
	}
	dp3[0] = p*a[0] + q*a[0] + r*a[0];
	for(int i = 1; i < n; i++){
		dp3[i] = max(dp3[i-1], dp2[i] + r*a[i]);
	}
	cout << dp3[n-1] << "\n";
	return 0;
}
