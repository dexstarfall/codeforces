#include <bits/stdc++.h>
using namespace std;

// gcd function
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// main function
int main() {
    int a, b;
    cin >> a >> b;
    int possible_outcome = 7 - max(a, b);
    int g = gcd(possible_outcome, 6);
    cout << possible_outcome / g << "/" << 6 / g;
    return 0;
}

