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
    int n, m, z;
    cin >> n >> m >> z;

    int lcm = (n * m) / gcd(n, m);
    cout << z / lcm << endl;
    return 0;
}