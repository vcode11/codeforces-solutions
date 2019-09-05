#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,m,n,d;
	int dam[4];
	cin >> dam[0] >>dam[1] >> dam[2] >> dam[3] >> d;
	bool arr[d+1] = {0};
	for(int i = 0; i < 4; i++){
		for(int j = dam[i]; j < d+1; j+=dam[i]){
			arr[j] = 1;
		}
	}
	int ans = 0;
	for(int i = 0; i < d+1; i++){
		if(arr[i] == 1) ans++;
	}
	cout << ans;
   return 0;
}
