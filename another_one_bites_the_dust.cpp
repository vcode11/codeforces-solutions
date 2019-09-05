#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	ll a, b, c;
	cin >> a >> b >> c;
	if(b>a){
		ll ans = 2*a+1+2*c;
		cout << ans << endl;
	}
	else if(b < a){
		ll ans = 2*b + 2*c + 1;
		cout << ans << endl;
	}
	else{
		ll ans = 2*a+2*c;
		cout << ans << endl;
	}
	return 0;
}
