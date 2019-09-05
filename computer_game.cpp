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
	int tc;
	cin >> tc;
	while(tc--){
		ll k, n, a, b;
		cin >> k >> n >> a >> b;
 		ll lo = 0, hi = min((ll)ceil(k/(double)a) -1,n), ans = -1;
		while(lo <= hi){
			ll mid = (lo+hi)/2;
			if(k - a*mid - b*(n-1-mid) > b){
				ans = mid;
				lo = mid + 1;
			}
			else hi = mid - 1;
		}		
	       cout << ans << "\n";
	}
	return 0;
}
