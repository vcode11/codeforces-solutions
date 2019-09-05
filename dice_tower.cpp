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
	int top;
	cin >> top;
	vpii tow(n);
	int bottom = 7-top;
	bool f = 1;
	for(int i = 0; i < n; i++){
		cin >> tow[i].ff >> tow[i].ss;
	}
	for(int i = 1; i < n; i++){
		bool arr[7] = {0};
		int x = tow[i].ff , y = tow[i].ss;
		arr[x] = arr[y] = arr[7-x] = arr[7-y] = 1;
		for(int j = 1; j <= 6; j++){
			if(arr[j] == 0){
				if(bottom == j || bottom == 7-j) break;
				else{
					f = 0;
					break;
				}
			}
		}
		if(f == 0) break;
	}
	if(f) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
