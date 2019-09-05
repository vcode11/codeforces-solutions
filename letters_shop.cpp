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
#define PQ priority_queue
using namespace std;
string s;
int n;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	cin >> s;
	int m;
	cin >> m;
	int arr[n][26];
	for(int i = 0; i < 26; i++){
		if(s[0] - 97 == i) arr[0][i] = 1;
		else arr[0][i] = 0;
	}
	for(int i = 1; i < n; i++){
		for(int j = 0; j < 26; j++){
			if(s[i] - 97 != j) arr[i][j] = arr[i-1][j];
		       	else arr[i][j] = 1 + arr[i-1][j];	
		}
	}
	while(m--){
		string t;
		cin >> t;
		map <char, int> freq;
		for(int i = 0; i < t.size(); i++) freq[t[i]]++;
		int ans = 0;
		for(auto it = freq.begin(); it != freq.end(); it++){
			auto p = *it;
			int j = p.ff - 97;
			int cnt = p.ss;
			int lo = 0, hi = n-1, idx = n;
			while(lo <= hi){
				int mid = (lo + hi)/2;
				if(arr[mid][j] >= cnt){
					idx = mid;
					hi = mid - 1;
				}
				else lo = mid + 1;
			};
			//cout << p.ff << " " << p.ss  << " " << idx << "\n";
			ans = max(ans,idx);
		}
		cout << ans + 1 << "\n";
	}
	return 0;
}
