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
	int rem = n%4;
	n = rem;
	if(n == 0){
		cout << "1 A\n";
	}
	else if (n == 1){
		cout << "0 A\n";
	}
	else if(n == 2){
		cout << "1 B\n";
	}
	else{
		cout << "2 A\n";
	}
	return 0;
}
