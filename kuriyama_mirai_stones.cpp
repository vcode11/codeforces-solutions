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
	int n, m;
	cin >> n;
	vll v1(n), v2(n);
	for(int i = 0; i < n; i++) cin >> v1[i];
	v2 = v1;
	sort(all(v2));
	vll s1(n+1), s2(n+1);
	ll sum = 0, sum1 = 0;
	for(int i = 1; i <= n; i++){
		sum+=v1[i-1];
		s1[i] = sum;
		sum1+=v2[i-1];
		s2[i] = sum1;
	}
	cin >> m;
	while(m--){
		int x,l,r;
		cin >> x >> l >> r;
		if(x == 1){
			cout << s1[r] - s1[l-1] << "\n";
		}
		else cout << s2[r] - s2[l-1] << "\n";
	}
	return 0;
}
