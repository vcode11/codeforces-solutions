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
	map < pair <char,char> , bool> m;
	string a;
	for(int i = 0; i < 3; i++){
		cin >> a;
		if(a[1] == '>'){
			m[{a[0],a[2]}] = 1; 
		}
		else m[{a[2],a[0]}] = 1;
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 3; k++){
				char A = 65 + i, B = 65 + j, C = 65 + k;
				if(m[{A,B}] && m[{B,C}] && m[{C,A}] == 0){
					cout << C << B << A << "\n";
					return 0;
				}
			}
		}
	}
	cout << "Impossible\n";
	return 0;
}
