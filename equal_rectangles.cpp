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
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		map <int,int> m;
		for(int i = 0; i < 4*n; i++){
			int x;
			cin >> x;
			m[x]++;
		}
		bool f = 1;
		vii v;
		for(auto p: m){
			if(p.ss%2 != 0 ){
				f = 0;
				break;
			}
			for(int i = 0; i < p.ss/2; i++) v.pb(p.ff);
		}
		n = v.size();
		int p = v[0]*v[n-1];
		//cout << p << " " << f << "\n";
		for(int i = 0; i < n; i++){
			if(v[i]*v[n-i-1] != p){
				f = 0;
				break;
			}
		}
		if(f) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
