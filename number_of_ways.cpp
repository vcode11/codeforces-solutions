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
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n;
	cin >> n;
	vll v(n), sum(n+1);
	ll s = 0;
	vll b(n+1);
	for(int i = 0; i  < n; i++){
		cin >> v[i];
		s+=v[i];
		sum[i+1] = s;
	}
	ll cnt = 0;
	ll t = sum[n];
	if(t%3){
		cout << "0\n";
		return 0;
	}
	t/=3;
	for(int i = 1; i < n; i++){
		if(sum[i] == 2*t){
			b[i-1] = 1;
		}
	}
	s = 0;
	for(int i = 0; i <= n; i++){
		s+=b[i];
		b[i] = s;
	}
	for(int i = 1; i < n; i++){
		if(sum[i] == t){
			cnt+= b[n-1] - b[i-1];
		}
	}
	cout << cnt << "\n";
	return 0;
}
