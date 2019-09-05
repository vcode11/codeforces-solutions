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
	ll tc;
	cin >> tc;
	while(tc--)
	{
		string s,t,p;
		cin >> s >> t >> p;
		map<char,int> m;
		for(auto ch: p) m[ch]++;
		int j = 0;
		int cnt = 0;
		bool f = 0;
		for(int i = 0; i < t.size(); i++){
			if(j != s.size() && s[j] == t[i]){
				cnt++;
				j++;

			}
			else{
				if(m[t[i]] > 0){
					m[t[i]]--;
					cnt++;
				}
				else{
					cout << "NO\n";
					f = 1;break;
				}
			}
		}
		if(f) continue;
		if(j == s.size()) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
