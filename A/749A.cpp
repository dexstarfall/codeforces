#include <bits/stdc++.h>
using namespace std;

void printNoof2(int n) {
    for (int i = 1; i <= n; i++) {
        cout << 2 << " ";
    }
}

//main function
int main() {
    int n;
    cin >> n;

    int noof2 = n / 2;
    cout << noof2 << endl;
    
    if (n % 2 == 0) printNoof2(noof2);
    else {
        printNoof2(noof2 - 1);
        cout << 3;
    }
    return 0;
}