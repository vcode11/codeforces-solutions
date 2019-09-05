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
	int n;
	cin >> n;
	vii v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	sort(all(v));
	if(v[n-1] >= v[n-2] + v[n-3]) {
		cout << "NO\n";
		return 0;
	}
	else{
		cout << "YES\n";
		cout << v[n-2] << " ";
		for(int i = 0; i < n - 2; i++){
			cout << v[i] << " ";
		}
		cout << v[n-1] << "\n";
	}
	return 0;
}
