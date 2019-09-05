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
	ll arr[501];
	arr[3] = 6;
	arr[4] = 18;
	int n;
	cin >> n;
	ll ans = 6;
	for(ll i = 4; i <= n; i++){
		ans+=i*(i-1);
	}
	cout << ans << "\n";
	return 0;
}
