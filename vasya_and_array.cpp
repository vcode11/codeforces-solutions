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
#define PQ priority_queue
using namespace std;
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector <vpii> v(2);
	while(m--){
		int x, y, z;
		cin >> x >> y >> z;
		v[x].pb({y,z});
	}
	sort(v[0].begin(); v[0].end());
	sort(v[1].begin(),v[1].end());
	int arr[n+1] = {0};
	for(int i = 0; i < v[0].size() i++){
		int s = v[i].ff;
		int e = v[i].ss;
		int j;
		for(j = 0; j < v[1].size(); i++){
		}
	}
	return 0;
}
