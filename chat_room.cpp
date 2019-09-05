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
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	string s;
	cin >> s;
	string t = "hello";
	int j = 0;
	char ch = 'h';
	for(int i = 0; i < s.size(); i++){
		if(s[i] == t[j]){
			j++;
			if(j == 5){
				cout << "YES\n";
				return 0;
			}
		}

	}
	cout << "NO\n";
	return 0;
}
