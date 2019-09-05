#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, l;
	cin >> n >> l;
	int a[n];
	int r = 0;
	while(r < n){
		cin>>a[r];
		++r;
	}
	sort(a,a+n);
	double ans;
	ans = max(a[0],l- a[n-1]);
	for(int i = 0; i < n-1; i++){
		ans = max(ans,((double)a[i+1]-(double)a[i])/2);
	}
	cout << fixed <<setprecision(9) << ans;
   return 0;
}
