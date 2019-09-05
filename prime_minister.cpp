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
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int sum = 0;
	for(int i = 0; i < n; i++) sum+=arr[i];
	sum/=2;
	sum++;
	int cnt = 1, s = arr[0], v = ceil(n/2.0);
	bool f = 0;
	bool check[n] = {0};
	if(s >= sum){
		//cout << s << " " << sum << "\n";
		cout << "1\n";
		cout << "1\n";
		return 0;
	}
	for(int i = 1; i < n; i++){
		if(arr[i]*2 <= arr[0]){
			cnt++;
			s+=arr[i];
			check[i] = 1;
		}
		if(s >= sum){
			f = 1;
			cout << cnt << "\n";
			cout << "1 ";
			for(int i = 1; i < n; i++){
				if(check[i]){
					cout << i+1 << " ";
				}
			}	
			cout << "\n";
			return 0;
		}
	}
	if(f == 0) {
		cout << "0\n";
	}
	return 0;
}
