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
	double PI = acos(-1);
	int d, h, v, et;
	cin >> d >> h >> v >> et;
	double e = et*PI*d*d;
	e/=4;
	if(e >= v){
		cout << "NO\n";
	}
	else{
		double t = (PI*(d*d*h))/(v-e);
		t/=4;
		if(t > 10000) {
			cout << "NO\n";
			return 0;
		}
	        cout << "YES\n";
     		cout << setprecision(6) << fixed << t << "\n";
	}
	return 0;
}
