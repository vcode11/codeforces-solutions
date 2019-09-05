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
ll pow(ll a, ll b){
	ll res = 1;
	while(b > 0){
		if(b&1) res*=a;
		b/=2;
		a*=a;
	}
	return res;
}
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n, t;
	cin >> n >> t;
	t = n - t;
	string s1 ,s2;
	cin >> s1 >> s2;
	char arr[n+1];
	string s;
	bool v[n] = {0};
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(s1[i] == s2[i]) {
			v[i] = 1;
			cnt++;
		}
	}
	if(cnt >= t){
		int a = 0;
		for(int i = 0; i < n; i++){
			if(v[i] && a != t) {
				s.pb(s1[i]);
				a++;
			}
			else{
				for(char j = 97; j <= 122; j++){
					if(s1[i] != j && s2[i] != j){
						s.pb(j);
						break;
					}
				}
			}
		}
	}
	else{
		if(2*(t-cnt) + cnt > n){
			cout << "-1\n";
			return 0;
		}
		t = t - cnt;
		int a  = 0, b = 0;
		for(int i = 0; i < n; i++){
			if(v[i]){
				s.pb(s1[i]);
			}
			else if(a < t){
				s.pb(s1[i]);
				a++;
			}
			else if(b < t){
				s.pb(s2[i]);
				b++;
			}
			else{
				for(char j = 97; j <= 122; j++){
					if(s1[i] != j && s2[i] != j){
						s.pb(j);
						break;
					}
				}
			}
		}
	}
	cout << s << "\n";
	return 0;
}
