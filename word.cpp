#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,U,l;
    cin >> s;
    U = s;
    l = s;
    int cap = 0, small = 0,len = s.size();
    for(int i = 0; i < len; i++){
        if( (s[i] >= 65) && (s[i] <=90)){
            l[i] = (32 + l[i]);
            cap++;
        }
        else{
            U[i] = U[i] - 32;
            small++;
        }
    }
    if(cap > small) cout << U << '\n';
    else cout << l << '\n';
   return 0;
}