#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    bool isPossible = true;

    int a, b; cin >> a >> b;
    int h = max(a, b);
    n--;

    while (n--) {
        cin >> a >> b;
        if (min(a, b) > h) {
            isPossible = false;
            break;
        }
        if (max(a,b)>h) { 
            h = min(a,b); 
        }
        else {
            h = max(min(h, a), min(h, b));
        }
        
    }

    cout << (isPossible ? "YES" : "NO") << '\n';
    return 0;
}