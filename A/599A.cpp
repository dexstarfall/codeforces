#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int first_m = d1 + d2 + d3;
    int second_m = (first_m - max({ d1, d2, d3 })) * 2;

    cout << min(first_m, second_m) << endl;
    return 0;
}