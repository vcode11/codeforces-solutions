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
	map <int, char> m;
	m[0] = 'R';
	m[1] = 'O';m[2] = 'Y';m[3] = 'G'; m[4] = 'B'; m[5] = 'I'; m[6] = 'V';
	int n;
	cin >> n;
	string s = "";
	int j = 0;
	for(int i = 0; i < 7; i++){
		s+=m[i];
	}
	for(int i = 7; i < n; i++){
		s+=s[i-4];
	}
	cout << s << "\n";
	return 0;
}
