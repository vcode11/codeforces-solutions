#include <bits/stdc++.h>

using namespace std;
int main()
{
	long long n, m , a;
	cin >> n >> m >> a;
	long long b = ceil((double)n/a);
	long long h = ceil((double) m/a);
	cout<<b*h;
   return 0;
}
