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
	string arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int x = 0;
	vector <int> v1(26), v2(26);
	for(int i = 0; i < n; i++){
		int ch = arr[i][0] -97;
		if(v1[ch] < v2[ch]){
			v1[ch]++;
		}
		else v2[ch]++;
	}
	for(int i = 0; i < 26; i++){
		x+=((v1[i])*(v1[i]-1))/2;
		x+=((v2[i])*(v2[i]-1))/2;
	}
	cout << x << "\n";
	return 0;
}
