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
	int n;
	cin >> n;
	char arr[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> arr[i][j];
	}
	bool f = 1;
	char d = arr[0][0];
	for(int i = 0; i < n; i++){
		if(arr[i][i] != d || arr[i][n-i-1] != d){
			f = 0;
			break;
		}
	}
	if(!f){
		cout << "NO\n";return 0;
	}
	char c = arr[0][1];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j || i == n - j - 1) continue;
			if(c != arr[i][j] || c == d){
				f = 0;
				cout << "NO\n";
				return 0;
			}
		}
	}
	cout << "YES\n";
	return 0;
}
