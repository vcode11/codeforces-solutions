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
	int n;	
	cin >> n;
	vii adj[n+1];
	int color[n+1] = {0};
	int req[n+1];
	for(int i = 2; i <= n; i++){
		int x;
		cin >> x;
		adj[x].pb(i);
		adj[i].pb(x);
	}
	for(int i = 1; i <= n; i++){
		cin >> req[i];
	}
	int ans = 0;
	queue <int> q;
	q.push(1);
	while(!q.empty()){
		int f = q.front();
		q.pop();
		if(color[f] != req[f]){
			color[f] = req[f];
			ans++;
		}
		for(int u : adj[f]){
			if(color[u] == 0){
				color[u] = color[f];
				q.push(u);
			}
		}
	}
	cout << ans << "\n";
	return 0;
}
