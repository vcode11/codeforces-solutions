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
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	bool f[n];
	for(int i = 0; i < n; i++) cin >> f[i];
	vll s1(n+1), s2(n+1);
	ll val1 = 0, val2 = 0;
	for(int i = 0; i < n; i++){
		val1+=arr[i];
		if(f[i] == 1)val2+=arr[i];
		s1[i+1] = val1;
		s2[i+1] = val2;
	}
	ll ans = 0;
	//for(ll i : s2) cout << i << " ";
	for(int i = 0; i <= n-k; i++){
		ans = max(ans,s2[i] + s1[i+k] - s1[i] + s2[n] - s2[i+k]);
	}
	cout << ans << "\n";
	return 0;
}
