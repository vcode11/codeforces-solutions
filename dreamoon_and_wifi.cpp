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
	map <char,int> m1, m2;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		m1[s[i]]++;
	}
	cin >> s;
	for(int i = 0; i < s.size(); i++) m2[s[i]]++;
	int t = m1['+'] - m1['-'];
	int st = m2['+'] - m2['-'];
	int q = m2['?'];
	int cnt  = 0;
	int total = 1 << q;
	for(int i = 0; i < total; i++){
		int tmp = st;
		for(int j = 0; j < q; j++){
			if(i&(1<<j)) tmp+=1;
			else tmp-=1;
		}
		if(tmp == t) cnt++;
	}
	//cout << cnt << " " << total << "\n";
	double ans = (double) cnt/((double) total);
	cout << setprecision(9) << fixed << ans << "\n";
	return 0;
}
