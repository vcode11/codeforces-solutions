#include <bits/stdc++.h>
using namespace std;
bool prime[51];
int main()
{
    for(int i = 2; i <= 50; i++){
        for(int j = 2*i; j <= 50; j= j+i){
            prime[j] = 1;
        }
    }
    int n, m;
    cin >> n >> m;
    for(int i = n+1; i < 51; i++){
        if(prime[i] == 0){
            if(i == m){
                cout << "YES";
                return 0;
            }
            else{
                cout <<"NO";
                return 0;
            }
        }
    }
    cout <<"NO";
   return 0;
}