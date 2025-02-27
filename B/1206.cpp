#include <bits/stdc++.h>
using namespace std;
 
//main function
int main() {
    int n; cin >> n;
    long long coins = 0;
    int count_negative = 0, count_zero = 0;
    for (int i = 0; i < n; i++ ){
        int value; cin >> value;
        if (value == 0) {
            coins++;
            count_zero++;
        } else if (value < 0 ) {
            coins += -1 - value ;
            count_negative++;
        } else if (value > 1) {
            coins += value - 1;
        }
    }
    if (count_negative % 2 == 1 && count_zero == 0) coins+=2;
    cout << coins << "\n";
    return 0;
}