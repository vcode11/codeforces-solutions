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
	vector <string> v(3);
	cin >> v[0] >> v[1] >> v[2];
	int s[10] = {0}, p[10] = {0}, m[10] = {0};
	for(int i = 0; i < 3; i++){
		if(v[i][1] == 's'){
			s[v[i][0]-48] += 1;
		}
		if(v[i][1] == 'm') m[v[i][0] - 48] += 1;
		if(v[i][1] == 'p') p[v[i][0] - 48] += 1;
	}
	int cnt = 0;
	bool f = 0;
	for(int i = 1; i <= 9; i++){
		if(s[i] == 3 || m[i] == 3 || p[i] == 3){
			cout <<"0\n";
			return 0;
		}
		if(s[i] == 2 || m[i] == 2 || p[i] == 2) {
			f = 1;
			cout << "1";
			return 0;
		}
		if(i <= 8){
			if(s[i] > 0 && s[i+1] > 0){
				f = 1;
				if(i < 8 && s[i+2] > 0){
					cnt = 0;
					cout <<cnt;
					return 0;
				}
				cnt = 1;
			}
			if(p[i] > 0 && p[i+1] > 0){
				f = 1;
				if(i < 8 && p[i+2] > 0){
					cnt = 0;
					cout << cnt;
					return 0;
				}
				cnt = 1;
			}
			if(m[i] > 0 && m[i+1] > 0){
				f = 1;
				if(i < 8 && m[i+2] > 0){
					cnt = 0;
					cout << cnt;
					return 0;
				}
				cnt = 1;
			}
		}
	}
	for(int i = 1; i <= 7; i++){
		if(s[i] > 0 && s[i+2] > 0){
			f = 1;
			break;
		}
		if(p[i] > 0 && p[i+2] > 0){
			f = 1;
			break;
		}
		if(m[i] > 0 && m[i+2] > 0){
			f = 1;
			break;
		}
	}
	if(f == 1){
		cout << "1";
	}
	else cout << "2";
	return 0;
}
