#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n-1; i++){
        if(s[i+1] == s[i]){
            s[i] = '.';
        }
    }
    int count = 0;
    for(int i = 0 ;  i < n -1; i++){
        if(s[i] == '.') count++;
    }
    cout << count;
   return 0;
}