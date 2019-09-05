#include <bits/stdc++.h>
using namespace std;
bool is_distinct(string s,int l){
	for(int i = 0; i < l; i++){
		for(int j = i+1; j < l; j++){
				if(s[i] == s[j]){
						return false;
					}
			}
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	while(true){
		n = n + 1;
		if(is_distinct(to_string(n),4)){
				cout << n << endl;
				break;
			}
	}
   return 0;
}
