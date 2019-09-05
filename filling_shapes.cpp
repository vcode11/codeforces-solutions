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
ll binpow(int a, int b){
	ll res = 1;
	while(b > 0){
		if(b&1) res*=a;
		a = a*a;
		b/=2;
	}
	return res;
}
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n;
	cin  >> n;
	if(n%2) cout << "0\n";
	else{
		ll ans = 1<<(n/2);
		cout <<  ans << "\n";
	}
	return 0;
}
