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
#define N 10005
bool seive[N];
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int i, j;
	int k;
	cin >> k;
	bool f = 1;
	for(i = 5; i*i <= k; i++){
		if(k%i == 0 && k/i >= 5){
			j = k/i;
			f = 0;
			break;
		}
	}
	if(f){
	       	cout << "-1\n";
		return 0;
	}
	char arr[i][j];
	string s = "aeiou";
	int n = i, m = j;
	for(i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			arr[i][j] = s[(i+j)%5];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << arr[i][j];	
		}
	}
	return 0;
}
