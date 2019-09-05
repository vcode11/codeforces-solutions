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
	int n, t;
	cin >> n >> t;
	vpii v(n);
	for(int i = 0; i < n; i++) cin >> v[i].ff >> v[i].ss;
	int route = 0,time = INT_MAX;
	for(int i = 0; i < n; i++){
		if(v[i].ff >= t){
			if(time > v[i].ff){
				time = v[i].ff;
				route = i;
				if(time == t) break;
			}
			continue;
		}
		int rt = ceil((t-v[i].ff)/((double) v[i].ss));
		rt = v[i].ff + rt*v[i].ss;
		if(rt < time){
			time = rt;
			route = i;
		}
	}
	cout << route + 1 << "\n";
	return 0;
}
