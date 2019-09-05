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
		int n;
		cin >> n;
		int arr[n];
		int ans = 0, mod1 = 0, mod2 = 0;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			arr[i]%=3;
			if(arr[i] == 0) ans++;
			else if(arr[i] == 1) mod1++;
			else mod2++;
		}
		if(mod1 > mod2){
			ans+=mod2;
			mod1-=mod2;
			ans+=mod1/3;
		}
		else{
			ans+=mod1;
			mod2-=mod1;
			ans+=mod2/3;
		}	
		cout << ans << "\n";
	}
	return 0;
}
