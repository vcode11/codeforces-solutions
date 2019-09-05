#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3];
	int o[3][3];
	for(int i = 0; i < 3;i++){
		for(int j = 0; j < 3; j++){
			cin >> a[i][j];
			a[i][j] = a[i][j] % 2;
			o[i][j] = 1; 
			}
	}
	for(int i = 0; i < 3;i++){
		for(int j = 0 ; j < 3; j++){
			if(a[i][j] == 1){

				o[i][j] = 1 - o[i][j];
				if(i != 0) {o[i-1][j] = 1 - o[i-1][j];}
				if(j != 0) {o[i][j-1] = 1 - o[i][j-1];}
				if(i != 2) {o[i+1][j] = 1 - o[i+1][j];}
				if(j != 2) {o[i][j+1] = 1 - o[i][j+1];}
			}
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++) {cout << o[i][j];}
		cout << '\n';
	}
   return 0;
}
