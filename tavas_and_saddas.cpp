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
	string s;
	cin >> s;
	int n = s.size();
	int val = (1<<n) - 1;
	int x = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '7'){
			x = (x | 1 << (n-i-1));
		}
	}
	cout << val + x << "\n";
	return 0;
}
