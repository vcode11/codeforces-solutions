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
	cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int arr[n], idx;
		for(int i = 0; i< n; i++) {
			cin >> arr[i];
			if(arr[i] == 1) idx = i;
		}
		bool f = 1;
		int prev = 0;
		for(int i = idx+1;;i++){
			if(i == n) i = 0;
			if(i == idx) break;
			if(arr[i] < prev){
			 	f = 0;
				break;
			}
			prev = arr[i];
		}
		if(f) {
			cout << "YES\n";
			continue;
		}
		prev = 0;
		f = 1;
		for(int i = idx-1;;i--){
			if(i == -1) i = n-1;
			if(i == idx) break;
			if(arr[i] < prev){
			    f = 0;
			    break;
			}
			prev = arr[i];
		}
		if(f) cout<<"YES\n";
		else cout << "NO\n";
		
	}
	return 0;
}
