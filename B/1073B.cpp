#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int book_stack[n]; for (auto &it: book_stack) cin >> it;
    int steps[n]; for (auto &it: steps) cin >> it;
    
    int order[n+1]; for(int i=0;i<n;i++) order[book_stack[i]]=i+1;
    int pos = 0;
    for (int i=0; i<n; i++) {
        int temp = order[steps[i]];
        
        if (temp < pos) cout << 0 << " ";
        else {
            cout << temp - pos << " ";
            pos = temp;
        }
    }
  return 0;
}