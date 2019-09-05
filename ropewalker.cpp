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
	ll arr[3], d;
	cin >> arr[0] >> arr[1] >> arr[2] >> d;
	sort(arr,arr+3);
	int a = arr[0], b = arr[1], c = arr[2];
	ll ans = 0;
	if(c < b+d) ans += b+d-c;
	if(a > b-d) ans += a -(b-d);
	cout << ans << "\n";
	return 0;
}
