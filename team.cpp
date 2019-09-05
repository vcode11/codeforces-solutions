#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x, t = 3,ans = 0;
	while(n--){
		int sum = 0;
		while(t--){
			cin >> x;
			sum+=x; 
		}
		t = 3;
		if(sum >1){
			ans++;
		}
	}
	cout << ans;
   return 0;
}
