#include <bits/stdc++.h>
using namespace std;

int main () {
    string s1 ,s2;
    cin >> s1 >> s2;

    for( auto & i : s1) i = tolower(i);
    for( auto & i : s2) i = tolower(i);

    if(s1 < s2) cout << -1 << endl; 
    else if(s2 < s1) cout << 1 << endl; 
    else if(s2 == s1) cout << 0 << endl; 

    return 0;
}