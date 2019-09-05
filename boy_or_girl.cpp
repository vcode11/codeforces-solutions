#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n = 0;
	for(int i = 0; i < s.size();i++){
		for(int j = i+1; j < s.size(); j++){
			if(s[i] == s[j] && s[i] != '.') {s[j] = '.';n++;}
		}
	}
	if((s.size() - n)%2) cout << "IGNORE HIM!";
	else cout <<"CHAT WITH HER!";
   return 0;
}
