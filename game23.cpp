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
	ll n, m;
	cin >> n >> m;
	ll n_2 = 0, n_3 = 0, m_2 = 0, m_3 = 0, a = n, b = m;
	while(a > 1){
		if(a%2 == 0){
			n_2++;
			a/=2;
		}
		else break;
	}
	a = n;
	while(a > 1){
		if(a%3 == 0){
			n_3++;
			a/=3;
		}
		else break;
	}
	while(b > 1){
		if(b%2 == 0){
			m_2++;
			b/=2;
		}
		else break;
	}
	b = m;
	while(b > 1){
		if(b%3 == 0){
			m_3++;
			b/=3;
		}
		else break;
	}
	a = pow(2,n_2)*pow(3,n_3);
	b = pow(3,m_3)*pow(2,m_2);
	if(n/a == m/b){
		int ans = 0;
		if(m_3 < n_3 || m_2 < n_2){
			cout << "-1\n";
			return 0;
		}
		if(m_3 >n_3) ans += m_3 - n_3;
		if(m_2 > n_2) ans += m_2 - n_2;
		cout << ans << "\n";
	}
	else cout << "-1\n";
	return 0;
}
