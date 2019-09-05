#include <bits/stdc++.h>
using namespace std;
int main()
{
	int d, l,v1,v2;
	cin >> d >> l >> v1 >> v2;
	double ans = (double)(l-d)/((double)(v1+v2));
	cout << setprecision(8) << ans;
}
