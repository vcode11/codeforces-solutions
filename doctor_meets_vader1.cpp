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
	ll s, b;
	cin >> s >> b;
	ll attack[s];
	for(int i = 0; i < s; i++){
		cin >> attack[i];
	}
	vpll base(b);
       	for(int i = 0; i < b; i++){
		cin >> base[i].ff >> base[i].ss;
	}	
	sort(all(base));
	ll sum[b+1] = {0};
	ll su = 0;
	for(int i = 1; i <= b; i++){
		su+=base[i-1].ss;
		sum[i] = su;
	}
	//cout << sum[2] << " ";
	for(int i = 0; i < s; i++){
		pll p = {attack[i],0};
		//int it = lower_bound(base.begin(),base.end(),p) - base.begin();
		ll lo = 0, hi = b-1, ans = 0;
		while(lo<=hi){
			ll mid = (lo+hi)/2;
			if(base[mid].ff <= attack[i]){
				ans = sum[mid + 1];
				lo = mid + 1;
			}
			else hi = mid - 1;
		}
		cout << ans << " ";
	}
	return 0;
}
