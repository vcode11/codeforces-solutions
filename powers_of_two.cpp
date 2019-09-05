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
	int n, k;
	cin >> n >> k;
	PQ <int> q;
	for(int i = 0; i < 32; i++){
		if(n&(1<<i)) {
			q.push(i);
		}
	}
	if(q.size() > k){
		cout << "NO\n";
	}
	else{
		while(q.size() != k){
			int f = q.top();
			q.pop();
			if(f == 0){
				cout << "NO\n";
				return 0;
			}
			q.push(f-1);
			q.push(f-1);
		}
		cout << "YES\n";
		while(!q.empty()){
			int val = 1 << q.top();
			cout << val << " ";
			q.pop();
		}
	}
	return 0;
}
