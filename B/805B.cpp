#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; scanf("%d",&n);
    string str; str.reserve(n);
    
    for (int i =0; i<n/4; i++) str+= "aabb";
    string suffix[] = {"", "a", "aa", "aab"};
    str += suffix[n % 4];

    
    // for (int i =0; i<(n/4)+1; i++) str+= "aabb";
    // str = str.substr(0, n);
    
    cout << str << "\n";
  return 0;
}

