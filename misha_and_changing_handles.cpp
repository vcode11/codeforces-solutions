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
	int q;
	cin >> q;
	map<string,string> m1;
	map<string,bool> m2;
	while(q--){
		string a, b;
		cin >> a >>b;
		if(m1.find(a) == m1.end()){
			m2[a] = 1;
		}
		m1[a] = b;
		m1[b] = "";
	}
	cout << m2.size() << "\n";
	for(auto p: m2){
		cout << p.ff <<  " ";
	       string key = p.ff;	       
		while(m1[key] != ""){
			key = m1[key];
		}
		cout << key << "\n";
	}
	return 0;
}
