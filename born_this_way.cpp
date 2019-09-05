#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n, m, ta, tb, k;
	cin >> n >> m >> ta >> tb >> k;
	vector <ll> a(n);
    vector <ll> b(m);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		a[i]+=ta;
	}
	for(int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	if (k >= min(n,m)){
		cout << -1 << endl;
		return 0;
	}
	ll etime = 0;
	for(int i = 0; i <= k; i++){
		int t_arrival = a[i];
		int idx = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
		idx+=k-i;
		 if(idx < m) etime = max(etime,b[idx] + tb);
		 else{
		 	cout << "-1";
			return 0;
		 }
		//cout << i << " " << idx <<"  " << b[idx] + tb  <<endl;;
	}
	cout << etime << endl;
	return 0;
}
