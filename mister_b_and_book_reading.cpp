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
	int c , v0, v1, a, l;
	cin >> c >> v0 >> v1 >> a >> l;
	int p = 0;
	int d = 0;
	while(p < c){
		if(d == 0) {
			p+=min(v1,v0);
		}
		else {
			p = max(0,p-l);
			p+=min(v1,v0);	
		}
		v0+=a;
		d++;
	}
	cout << d << "\n";
	return 0;
}
