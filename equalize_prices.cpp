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
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		sort(arr,arr+n);
		ll lo = arr[0] - k, hi = arr[n-1] + k, ans = -1;
		while(lo <= hi){
			ll mid = (lo+hi)/2;
			if(abs(mid-arr[0]) <= k && abs(arr[n-1] - mid) <= k){
				ans = mid;
				lo = mid + 1;
			}
			else hi = mid - 1;	
		}	
		cout << ans << "\n";
	}
	return 0;
}
