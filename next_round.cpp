#include <bits/stdc++.h>
using namespace std;
int main()
{	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int ans;
	if(arr[k-1] > 0){
		ans = k;
		for(int i = k-1; i < n; i++){
			if(arr[i] != arr[i+1]) break;
			ans++;
		}
	}
	else{
		ans = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] <= 0) break;
			ans++;
		}
	}
	cout <<ans;
   return 0;
}
