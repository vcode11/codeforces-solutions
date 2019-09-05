#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	vector <int> v;
	v.reserve(100);
	int len = s.size();
	for(int i = 0; i < len; i++){
		if(s[i] != '+') v.push_back(s[i]-48);
	}
	sort(v.begin(),v.end());
	len = v.size();
	for(int i = 0; i < len-1;i++){
		cout << v[i]<<'+';
	}
	cout<<v[len-1];
   return 0;
}
