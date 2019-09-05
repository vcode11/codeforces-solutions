#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string t = "";
	cin >> s;
	for(int i = 0; i < s.size();i++){
		t = t + s[i];
		if(t == ".") {
			cout << '0';
			t = "";
		}
		else if (t == "-."){
			cout << '1' ;
			t = "";
		}
		else if(t == "--"){
			cout <<'2';
			t = "";
		}
	}
   return 0;
}
