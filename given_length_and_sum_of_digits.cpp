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
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, s;
	cin >> m >> s;
	if(m == 1){
		if(s <= 9) cout << s << " " << s << "\n";
		else cout << "-1 -1\n";
		return 0;
	}
	if(s > 9*m || s < 1){
		cout << "-1 -1\n";
		return 0;
	}
	int mi[m], ma[m];
	int t = s;
	for(int i = 0; i < m; i++){
		int j = 0;
		if(i == 0) j++;
		if(i == m-1){
			mi[i] = s;
			break;
		}
		for(;j <= 9; j++){
			if(s-j <= 9*(m-1-i)){
				mi[i] = j;
				s-=j;
				break;	
			}
		}
	}
	s = t;
	for(int i = 0; i < m; i++){
		for(int j = 9; j >= 0; j--){
			if(s - j >= 0){
				ma[i] = j;
				s-=j;
				break;
			}
		}
	}
	for(int i =0; i < m; i++){
		cout << mi[i];
	}
	cout << " ";
	for(int i = 0; i < m; i++) cout << ma[i];
	return 0;
}
