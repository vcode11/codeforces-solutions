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
	int n, x, y;
	cin >> n >> x >> y;
	string s;
	cin >> s;
	ll op = 0;
	for(int i = n - x; i < n; i++){
		if(i == n-y-1){
			if(s[i] == '0') op++;
		}
		else if(s[i] == '1') op++;
	}
	cout << op  << "\n";
	return 0;
}
