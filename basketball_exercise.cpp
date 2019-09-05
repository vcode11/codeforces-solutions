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
ll h1[100005], h2[100005];
int n;
ll dp[100005][2];
ll solve(int idx, bool f){
	if(idx == n) return 0;
	if(dp[idx][f] != -1 ) return dp[idx][f];
	if(f){
		return dp[idx][f] = max(h1[idx] + solve(idx+1,!f), solve(idx+1,f));
	}
	else return  dp[idx][f] = max(h2[idx] + solve(idx+1,!f), solve(idx+1,f));
}
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> h1[i];
		dp[i][0] = dp[i][1] = -1;
	}
	for(int i = 0; i < n; i++) cin >> h2[i];
	cout << max(solve(0,0),solve(0,1)) << "\n";
	return 0;
}
