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
	int n, m;
	cin >> n >> m;
	if(m < n-1 || m > 2*n + 2){
		cout << "-1\n";
		return 0;
	}
	if(m == n-1){
		int num = 0;
		for(int i = 0; i < m+n; i++){
			cout << num;
			num = 1 - num;
		}
		return 0;
	}
	while(m > n && m > 0 && n > 0){
		cout << "110";
		m-=2;
		n-=1;
	}
	if(m == n) for(int i = 0; i < m; i++) cout << "10";
	else{
		if(m- n == 2)cout << "11\n";
		else cout << "1\n";
	}	

	return 0;
}
