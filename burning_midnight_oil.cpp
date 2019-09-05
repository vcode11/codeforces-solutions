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
	ll lo = 0, hi = n, v = -1;
	while(lo <= hi){
		ll mid = (lo+hi)/2;
		ll s = mid;
		for(ll i = 1; i <= 32; i++){
			if(mid/pow(k,i) == 0) break;
			s+=(mid/pow(k,i));
		}
		if(s >= n){
			v = mid;
			hi = mid - 1;
		}
		else lo = mid + 1;
	}
	cout << v << "\n";
	return 0;
}
