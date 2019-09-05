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
	ll n, m;
	cin >> n >> m;
	ll an[5] = {0}, am[5] = {0};
	for(int i = 0; i < 5; i++){
		an[i] = n/5;
	       am[i] = m/5;	
	}
	for(int i = n - n%5+1; i <= n; i++){
		an[i%5]++;
	}
	for(int i = m - m%5+1; i <= m; i++){
		am[i%5]++;
	}
	ll ans = an[0]*am[0] + an[1]*am[4] + an[2]*am[3] + an[3]*am[2] + an[4]*am[1];
	cout << ans << "\n";
	return 0;
}
