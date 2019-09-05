#include <bits/stdc++.h>
typedef long long ll;
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
#define vvll vector <vll>
#define vvii vector <vii>
#define all(v) v.begin(),v.end()
#define PQ priority_queue
using namespace std;
ll mod = 1000000007;
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
	int n;
	cin >> n;
	vll v(n);
	ll g = 0;
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		g = __gcd(g,v[i]);
	}
	ll cnt = 0;
	for(ll i = 1; i*i < g; i++){
		if(g%i == 0) cnt+=2;
	}
	ll x = sqrt(g);
	if(x*x == g) cnt++;
	cout << cnt << "\n";
	return 0;
}
