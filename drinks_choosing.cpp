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
	int n, k;
	cin >> n >> k;
	map <int,int> m;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		m[x]++;
	}
	int cnt = 0, extra = 0;
	for(pii p: m){
		cnt += p.ss - (p.ss%2);
		extra+=p.ss%2;
	}
	cout << cnt  + ceil(extra/2.0) << "\n";
	return 0;
}
