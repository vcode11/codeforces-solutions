#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int left_ones = 0; int right_ones = 0;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		if(x==1) left_ones++;
		if(y==1) right_ones++;
	}
	int l0_r1 = left_ones + n - right_ones;
	int l1_r0 = n - left_ones + right_ones;
	int l0_r0 = left_ones + right_ones;
	int l1_r1 = n - left_ones + n - right_ones;
	int ans = min( min(l0_r1,l1_r0), min(l1_r1,l0_r0) );
	cout << ans;
   return 0;
}
