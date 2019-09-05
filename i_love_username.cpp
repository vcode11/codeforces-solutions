#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x;
	cin >> x;
	int ans = 0;
	int curr_min = x,curr_max = x;
	for(int i = 0; i < n -1 ; i++){
		cin >> x;
		if(x < curr_min) ans++;
		if(x > curr_max) ans++;
		curr_max = max(x,curr_max);
		curr_min = min(x,curr_min);
	}
	cout << ans;
   return 0;
}
