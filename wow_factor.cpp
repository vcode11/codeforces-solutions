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
string s;
string t;
ll dp[1000005][6];
int n, m;
ll solve(int i, int j){
	if(j == m && i == n) return 1;
	if(i == n) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	if(j == 0 || j == 3){
		if(s[i] == t[j] && s[i] == s[i+1]) return dp[i][j] =  solve(i+2,j+2) + solve(i+1,j);
		else return dp[i][j] = solve(i+1,j);
	}
	if(s[i] == t[j]) return dp[i][j] = solve(i+1,j+1) + solve(i+1,j);
	else return  dp[i][j] = solve(i+1,j);
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> s;
	t = "vvovv";
	for(int i = 0; i < 1000005; i++){
		for(int j = 0; j < 6; j++) dp[i][j] = -1;
	}
	n = s.size();
	m = t.size();
	cout << solve(0,0) << "\n";
	return 0;
}
