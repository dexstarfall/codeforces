#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string str; cin >> str;
    
    if (n<=2) {
        cout << str;
        return 0;
    }

    string left="", right = "";
    int a = 1, b = n-2; 
    if (n%2) a=0;
    for (int i=1; i<=n/2; i++) {
        left+=str[b], right+=str[a];
        a+=2, b-=2;
    }
    cout << ( n%2 ? left+right+str[n-1] : left+right) <<"\n";

  return 0;
}