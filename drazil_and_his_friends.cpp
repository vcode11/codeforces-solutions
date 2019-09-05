#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n, m;
	cin >> n >> m;
	int boys;
	cin >> boys;
	int b[n] ={0};
	for(int i = 0; i < boys; i++) {
		int x;
		cin >> x;
		b[x] = 1;
	}
	int girls;
	cin >> girls;
	int g[m]={0};
	for(int i = 0; i < girls; i++) {
		int x;
		cin >> x;
		b[x]= 1;
	}
	return 0;
}
