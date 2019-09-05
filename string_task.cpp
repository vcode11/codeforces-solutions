#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(size_t i = 0; i < s.size(); ++i){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] =='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i] == 'O'||s[i] == 'U'||s[i] =='Y'||s[i]=='y'){
			s.erase(i,1);
			--i;
		}
	}
	for(size_t i = 0; i < s.size(); i++){
		cout<<'.';
		if((int) s[i] <= 90) cout << (char)((int)s[i] + 32);
		else cout << s[i];
	}
   return 0;
}
