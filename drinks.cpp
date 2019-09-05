#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float ans = 0;
	for(int i = 0; i < n; i++){
		float x;
		cin >> x;
		ans+=x/n;
	}
	cout <<setprecision(5)<< ans;
   return 0;
}
