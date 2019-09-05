#include <bits/stdc++.h>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector <ll>
#define vii vector <int>
#define vpii vector <pii>
#define vpll vector <pll>
#define ff first
#define ss second
#define matrix vector <vll>
#define all(v) v.begin(),v.end()
#define PQ priority_queue
using namespace std;
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++) ans = ans^arr[i][0];
	if(ans > 0){
		cout << "TAK\n";
		for(int i = 0; i < n; i++) cout << "1 ";
		return 0;
	}
	int i, j;
	bool f = 0;
	for(i = 0; i < n; i++){
		for(j = 1; j < m; j++){
			if(arr[i][j] != arr[i][0]){
				f = 1;	
			       	break;
			}
		}
		if(f) break;
	}
	if(f){
		cout << "TAK\n";
		for(int k = 0; k < i; k++){
			cout << "1 ";
		}
		cout << j+1 << " ";
		for(int k = i+1; k < n; k++) cout << "1 ";
		return 0;
	}
	cout << "NIE\n";
	return 0;
}
