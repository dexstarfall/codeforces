#include <bits/stdc++.h>
using namespace std;

// 499B
int main() {
  int n, m; cin >> n >> m;
  string s1[m], s2[m], lecture[n];
  // string sorted1[m], sorted2[m];
  // string translated_lecture[n];
  
  // input in s1 and s2
  for (int i=0; i<m; i++) {
    string a, b; cin >> a >> b;
    if ( a.size() <= b.size() ) {
      s1[i] = a;
      s2[i] = b;
    } else {
      s2[i] = a;
      s1[i] = b;
    }
  }
  
  //input in lecture
  for (int i=0; i<n; i++) {
    string word; cin >> word;
    for (int j=0; j<m; j++) {
      if (word == s1[j] || word == s2[j]){
        lecture[i] = s1[j];
        break;
      }
    }
  }
  
  for(auto it: lecture) cout << it << " ";
    
}