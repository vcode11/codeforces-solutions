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
	ll n;
	cin >> n;
	vll v(n);
	for(int i = 0; i  < n; i++) cin >> v[i];
	sort(all(v));
	cout << v[n-1] - v[0] << " ";
	ll cnt = 0;
	ll diff = v[n-1] - v[0];
	map<ll,ll> m;
	for(ll i: v){
		m[i]++;
	}
	if(v[0] == v[n-1]){
		cout << (n*(n-1))/2;
	}
	else cout << m[v[0]]*m[v[n-1]] << "\n";
	return 0;
}
