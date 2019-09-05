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
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] == '0'){
			cout << "YES\n0";
			return 0;
		}
		for(int j = i; j < n; j++){
			for(int k = j; k < n; k++){
				string t; t+=s[i];
				if(j != i) t+=s[j];
				if(k != j) t+=s[k];
				int m = stoi(t);
				if(m%8 == 0){
					cout << "YES\n" << t;
					return 0;
				}	
			}
		}
	}
	cout << "NO\n";
	return 0;
}
