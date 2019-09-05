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
	ll n, k;
	cin >> n >> k;
	ll lo = 0, hi = k-1, ans = -2;
	while(lo<=hi){
		ll mid = (lo+hi)/2;
		ll val = ((2*k-mid)*(mid+1))/2 - mid;
		if(val >= n){
			ans = mid;
			hi = mid-1;
		}	
		else lo = mid + 1;
	}
	if(n == 1) cout <<"0\n";
	else cout << ans+1 << "\n";
	return 0;
}
