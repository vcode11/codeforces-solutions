#include <bits/stdc++.h>
typedef long long ll;
#define mod 1000000007
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector <ll>
#define vii vector <int>
#define vpii vector <pii>
#define vpll vector <pll>
#define first ff
#define second ss
#define matrix vector <vll>
using namespace std;
bool is_lucky(int j){
	string s = to_string(j);
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '4' && s[i] != '7') return 0;
	}
	return 1;
}
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n;
	cin >> n;
	for(int i = 4; i  <= n; i++)
	{
		if(is_lucky(i))
		{
			for(int j = i; j <= n; j+=i){
				if(j == n){
					cout << "YES\n";
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
	return 0;
}
