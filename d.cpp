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
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		int t = n;
		n-=(n/k)*k;
		if(n == 0) {
			cout << "Alice\n";return 0;
		}
		if(t%2) cout << "Bob\n"
		else cout << "Alice\n";

	}
	return 0;
}
