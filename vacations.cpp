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
	int n;
	cin >> n;
	vll a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector <vll>  dp(n, vll (3));
	if(a[0] == 1 || a[0] == 3) dp[0][1]++;
	if(a[0] == 2 || a[0] == 3) dp[0][2]++;
	for(int i = 1; i < n; i++){
		dp[i][0] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
		dp[i][1] = max(dp[i-1][0],dp[i-1][2]);
		if(a[i] == 1 || a[i] == 3) dp[i][1]++;
		dp[i][2] = max(dp[i-1][0],dp[i-1][1]);
		if(a[i] == 2 || a[i] == 3) dp[i][2]++;
	}
	cout << n - max(dp[n-1][0], max(dp[n-1][1],dp[n-1][2])) << "\n";
	return 0;
}
