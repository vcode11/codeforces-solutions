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
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int t = 1 << n;
	for(int i = 0; i < t; i++){
		int val = 0;
		for(int j = 0; j < n; j++){
			if(i&(1<<j)) val = (val + arr[j])%360;
			else val = (val + 360 -arr[j])%360;
		}
		val%=360;
		if(val == 0){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
