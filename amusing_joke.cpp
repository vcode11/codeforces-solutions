#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t,g;
	cin>>s>>t>>g;
	sort(g.begin(),g.end());
	s = s + t;
	sort(s.begin(),s.end());
	if(s==g) cout <<"YES";
	else cout <<"NO";
   return 0;
}
