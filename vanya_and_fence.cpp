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
	int n , h;
	cin  >> n >> h;
	int arr[n];
	for(int i =  0; i < n; i++) cin >> arr[i];
	sort(arr,arr+n);
	int ans = n;
	for(int i = n-1; i >= 0; i--){
		if(arr[i] > h) ans++;
		else break;
	}
	cout << ans << "\n";
	return 0;
}
