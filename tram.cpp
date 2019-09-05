#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ans = 0,p = 0;;
	for(int i = 0; i < n;i++){
		int x,y;
		cin >> x >> y;
		p+=y-x;
		ans = max(ans,p);
	}
	cout << ans;
   return 0;
}
