#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t; cin >> s >> t;
    set<char> set_s(s.begin(),s.end());
    
    bool found = false;
    for(int i=0; i<s.length(); i++) {
        if (set_s.count(t[i])) {
            found = true; 
            break;
        }
    }
    cout << (found ? "YES" : "NO") <<"\n";
}

int main() {
    int t; cin >> t; 
    while(t--) solve();
    return 0;
}