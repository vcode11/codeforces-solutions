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
	int n, m;
	cin >> n >> m;
	bool d[n+1] = {0};
	while(m--){
		int x, y;
		cin >> x >> y;
		d[x] = 1; d[y] = 1;
	}
	int centre;
	for(int i = 1; i <= n; i++){
		if(!d[i]){
			centre = i;
			break;
		}
	}
	cout << n-1 << "\n";
	for(int i = 1; i <= n; i++){
		if(i != centre){
			cout << i << " " << centre << "\n";
		}
	}
	return 0;
}
