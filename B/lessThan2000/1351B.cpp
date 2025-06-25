#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int _; cin >> _;
    while (_--) {
        int a1, b1, a2, b2; cin >> a1 >> b1 >> a2 >> b2;
        if (a1 > b1) swap(a1,b1);
        if (a2 > b2) swap(a2,b2);
        if ( b1 == b2 && a1 + a2 == b1 ) puts("Yes");
        else puts("No");
    }
    return 0;
}