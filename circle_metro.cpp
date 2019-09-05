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
	int n, a, x, b, y;
	cin >> n >> a >> x >> b >> y;
	a--;x--;b--;y--;
	while(1){
		if(a == b) {
			cout << "YES\n";
			return 0;
		}
		if(a == x || b == y) break;
		a = (a+1)%n;
		b = (b - 1 + n)%n;
	}
	cout << "NO\n";
	return 0;
}
