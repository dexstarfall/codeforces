#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int a, b;
    cin >> a >> b;

    int pair1 = min(a, b);
    int pair2 = (max(a, b) - min(a, b)) / 2;

    cout << pair1 << " " << pair2 << "\n";
    return 0;
}