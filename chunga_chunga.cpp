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
	ll x , y , z ;
	cin >> x >> y >> z;
	if(x/z + y/z == (x+y)/z) cout << (x+y)/z << " 0\n";
	else cout << (x+y)/z << " " << min(z - x%z,z -y%z) << "\n";
	return 0;
}
