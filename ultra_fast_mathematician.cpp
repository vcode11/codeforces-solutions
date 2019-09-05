#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    int len = s.size();
    string o = "";
    for(int i = 0; i < len; i++){
        if(s[i]!=t[i]) o = o + "1";
        else o = o + "0";
    }
    cout << o;
   return 0;
}