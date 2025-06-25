#include <bits/stdc++.h>
using namespace std;

bool findPrime(int newnum) {
    for (int i = 2; i <= sqrt(newnum); i++) {
        if (newnum % i == 0) return false;
    }
    return true;
}

int findNumber(int n) {
    if (n == 1) return 3;
    else if (n == 2) return 4;
    for (int i = 1; i <= n; i++) {
        int temp = n * i + 1;
        if (!findPrime(temp)) return i;
    }
    return 0;
}

//main function
int main() {
    int n;
    cin >> n;
    cout << findNumber(n);
    return 0;
}
