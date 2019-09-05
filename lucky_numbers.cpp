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
	string t = "",ans = "";
	for(int i = 0; i < n; i++) {
		t.pb('4');
		ans.pb('7');
	}
	bool f = 0;
	int total = 1 << n;
	for(int i = 0; i < total; i++){
		if(n%2) break;
		string tmp = t;
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if(i & (1 << j)) tmp[j] = '7';
			else cnt++;
		}
		if(2*cnt == n && tmp >= s && tmp < ans){
			ans = tmp;
			f = 1;
		}
	}
	if(f) {
		cout << ans << "\n";
	}
	else{
		if(n%2) n--;
		for(int i = 0; i < (n+2)/2; i++) cout << "4";
		for(int i = 0; i < (n+2)/2; i++) cout << "7";
	}
	return 0;
}
