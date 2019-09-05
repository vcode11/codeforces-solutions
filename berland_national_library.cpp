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
	int n;
	cin >> n;
	map <string, bool> m;
	int cnt = 0, tmp = 0;
	for(int i = 0; i < n; i++){
		string a, b;
		cin >> a >> b;
		if(a == "+"){
			m[b] = 1;
			tmp++;
		}
		else{
			if(m[b] == 0){
				cnt++;
			}
			else{
				m[b] = 0;
				tmp--;
			}
		}
		cnt =  max(cnt,tmp);
	}
	cout << cnt << "\n";
}
