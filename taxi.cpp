#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x;
	int c[5] = {0, 0, 0 , 0, 0};
	for(int i = 0; i < n; i++){
	 cin >> x;
		if(x == 1 ) c[1]++;
		else if (x == 2) c[2]++;
		else if (x == 3) c[3]++;
		else c[4]++;
	}
	// for(int i = 0; i < 5; i++) cout << c[i] << endl;
	int taxis = c[4];
	taxis+=c[2]/2;
	c[2] = c[2]%2;
	if(c[3] > c[1]){
		c[3]-=c[1];
		taxis+=c[1];
		taxis+=c[3]+c[2];
		cout << taxis;
		return 0;
	}
	else{
		c[1]-=c[3];
		taxis+=c[3];
		taxis+=c[1]/4;
		c[1]%=4;
		if(c[1] == 3 && c[2]){
			taxis+=2;
			cout << taxis;
			return 0;
		}
		else{
			if(c[1] != 0 || c[2] != 0){
				taxis+=1;
			}
			cout << taxis;
			return 0;
		}
	}
	
}
