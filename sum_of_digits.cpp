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
	ll n = s.size();
	ll sum = 0;
	int cnt = 1;
	if(n == 1){
		cout << "0\n";
		return 0;
	}
	for(int i = 0; i < n; i++) sum+= s[i]-48;
	while(sum/10 != 0){
		s = to_string(sum);
		sum = 0;
		for(int i = 0; i < s.size(); i++) sum+= s[i]-48;
	       	cnt++;	
	}
	cout << cnt << "\n";
	return 0;
}
