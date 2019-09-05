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
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	if(n == 1 || n == 2){
		cout << "no\n";
		return 0;
	}
	for(int i = 1; i < n-1; i++){
		int x = arr[i];
		int y = arr[i+1];
		if(x > y) swap(x,y);
		for(int j = 0; j < i; j++){
			int a = arr[j], b = arr[j+1];
			if(a > b) swap(a,b);
			if(a < x && x < b && b < y){
				cout << "yes\n";
				return 0;
			}
			if(x < a && y > a && y < b){
				cout << "yes\n";return 0;
			}
		}
	}
	cout << "no\n";
	return 0;
}
