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
	vii row(n), col(n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
			if(arr[i][j] == 'C'){
				row[i]++;col[j]++;	
			}
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cnt+=(row[i]*(row[i]-1))/2;
		cnt+=(col[i]*(col[i]-1))/2;
	}
	cout << cnt << "\n";
	return 0;
}
