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
		int n,m;
		cin >> n >> m;
		char arr[n][m];
		int row[n] = {0}, col[m] = {0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			int w = 0;
			for(int j = 0; j < m; j++){
				if(arr[i][j] == '.') w++;
			}
			row[i] = w;
		}
		for(int i = 0; i < m; i++){
			int w = 0;
			for(int j = 0; j < n; j++){
				if(arr[j][i] == '.') w++;
			}
			col[i] = w;
		}
		int ans = INT_MAX;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				int val = row[i] + col[j];
				if(arr[i][j] == '.') val--;
				ans = min(ans,val);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
