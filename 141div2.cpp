afproxydsf
#include <bits/stdc++.h>
using namespace std;
int main()
{
	set <int> s;
	int x,y,z,w;
		cin >> x >> y >> z >> w;
	s.insert(x);s.insert(y); s.insert(z);s.insert(w);
	cout << 4 - s.size();
   return 0;
}
