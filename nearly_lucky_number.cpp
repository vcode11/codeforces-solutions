#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int lucky_count = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == '4' || s[i] == '7') lucky_count++;
    }
    if(lucky_count == 4 || lucky_count == 7) cout << "YES";
        else cout <<"NO";
   return 0;
}