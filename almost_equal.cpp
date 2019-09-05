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
	int n;
	cin >> n;
	if(n%2 == 0){
		cout << "NO\n";
		return 0;
	}
	int arr[2*n+2];
	int f = 1;
	int val = 1;
	for(int i = 1; i <= n; i++){
		if(f){
			arr[i] = val;
			arr[i+n] = val+1;
		}
		else{
			arr[i+n] = val;
			arr[i] = 1+val;
		}
		f = 1 -f;
		val+=2;
	}
	cout << "YES\n";
	for(int i = 1; i <= 2*n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
