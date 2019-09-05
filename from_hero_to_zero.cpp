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
		ll n, k;
		cin >> n >> k;
		ll ans = 0;
		while(n > 0){
			while(n%k == 0) {
				n/=k;
				ans++;
			}
			ans+=n%k;
			n  = n - n%k;
		}
		cout << ans << "\n";
	}
	return 0;
}
