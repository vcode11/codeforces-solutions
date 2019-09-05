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
	vii v(n), t(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	t = v;
	sort(all(t));
	if(v == t){
		cout << "yes\n1 1\n";
		return 0;
	}
	int j = 0, k = n-1;
	for(int i = 0; i < n-1; i++){
		if(v[i] > v[i+1]){
			j = i;
			for(int a = j+1; a  < n; a++){
				if(v[a] >= v[a-1]){
					k = a-1;
					break;
				}
			}
			break;	
		}
	}
	reverse(v.begin()+ j, v.begin()+k+1);
	if(v == t){
		cout << "yes\n";
		cout << j+1<<" "<< k+1<<"\n";
	}
	else{
		cout <<"no\n";
	}
	return 0;
}
