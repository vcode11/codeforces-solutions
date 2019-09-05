#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i, j,x;
	for(i = 0; i < 5;i++){
		bool flag = 0;
		for(j = 0; j < 5; j++){
			cin >> x;
			if(x == 1){
				flag = 1;
				break;
			}
		}
		if(flag) break;
	}
	cout << abs(i -2) + abs(j -2)<< endl;

}
