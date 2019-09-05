#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	map <int, int> power;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		power[i] = x;
	}
	map <int, int> mp;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mp[i+1] = x;
	}
	int c[k+1];
	for(int i = 1; i < k+1; i++){
		cin >> c[i];
	}
	int ans = 0;
	for(int i = 1; i < k+1; i++){
		int id = c[i];
		int school = mp[id];
		int p = power[id];
		map <int, int > :: iterator it1;
		for(it1 = mp.begin(); it1 != mp.end(); it1++){
			if(it1->second == school && power[it1->first] > p){
				ans++;
				break;
			}
		}
	}
	cout << ans;
}
