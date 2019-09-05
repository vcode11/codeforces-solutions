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
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int m = 1;
	for(int i = 0; i < n; i++){
		int cnt = 1;
		int j = i-1, k = i;
		while(j >= 0){
			if(arr[j]  <= arr[i]){
				cnt++;
				j--;
				i--;
			}
			else break;
		}
		i = k;
		k = i+1;
		j = i;
		while(k < n){
			if(arr[i] >= arr[k]){
				cnt++;
				i++;
				k++;		
			}
			else break;
		}
		m = max(m,cnt);
	}
	cout << m << "\n";
	return 0;
}
