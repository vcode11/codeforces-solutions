#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n%2) {
		cout << "-1" ; return 0;
	}
	int arr[n];
	for(int i = 0; i < n; i++){
		arr[i] = i+1;
	}
	for(int i = 0; i < n-1; i+=2){
		swap(arr[i+1],arr[i]);
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
   return 0;
}
