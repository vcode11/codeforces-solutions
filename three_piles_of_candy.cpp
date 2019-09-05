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
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		ll arr[3];
		ll ans = 0;
		cin >> arr[0] >> arr[1] >> arr[2];
		for(int i = 0; i < 3; i++){
			for(int j = i+1; j < 3; j++){
				ll a = arr[i], b = arr[j];
				// a + x = b + y
				// x-y=b-a
				ll d = b - a;
				//x+y <= a[..]
				ll x = (arr[3-i-j] + b - a)/2;
				ans = max(ans,a+x);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
