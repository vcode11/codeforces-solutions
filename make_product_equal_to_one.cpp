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
int n;
vll v(100005);
ll dp[100005][3];
ll solve(ll idx, ll p){
	if(dp[idx][p+1] != -1) return dp[idx][p+1];
	if(idx == n) {
		if(p == 1) return 0;
		else return INT_MAX;
	}
	return  dp[idx][p+1] = min(abs(v[idx]+1) + solve(idx+1,p*-1), abs(v[idx]-1) + solve(idx+1,p));
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 0; i < 100005; i++){
		for(int j = 0; j < 3; j++) dp[i][j] = -1;
	}
	for(int i = 0; i < n; i++) { 
		cin >> v[i];
	}
	cout << solve(0,1) << "\n";
	return 0;
}
