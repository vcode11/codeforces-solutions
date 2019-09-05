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
	ll k, a, b;
	cin >> k >> a >> b;
	if(a < 0 && b < 0) {a = abs(a);b = abs(b); swap(a,b);}
	if(a > 0)cout << b/k - (a-1)/k << "\n";
	else cout << b/k + abs(a)/k + 1<< "\n";
	return 0;
}
