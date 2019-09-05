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
	set <int> st;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		st.insert(x);
	}
	if(st.size() > 3){
		cout << "-1\n";
	}
	else if(st.size() == 2){
		auto it = st.begin();
		int a = *it;
		it++;
		int b = *it;
		if((b-a)%2 == 0)cout << (b-a)/2 << "\n";
		else cout << b-a << "\n";
	}
	else if(st.size() == 1) cout << "0\n";
	else{
		auto it = st.begin();
		int a = *it;it++;
		int b = *it; it++;
		int c = *it;
		if(c - b + a  == b){
			cout << b-a << "\n";
		}
		else cout << "-1\n";
	}
	return 0;
}
