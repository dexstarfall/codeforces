#include <bits/stdc++.h>
using namespace std;

//consecutive days when Arya won
int consecutivdays(int d) {
    int max = 0, count = 0;
    for (int i = 0; i < d; i++) {
        string s;
        cin >> s;
        //0 found
        if (s.find('0') != string::npos) {
            count++;
            if (count > max) {
                max = count;
            }
        } else {
            count = 0;
        }
    }
    return max;
}
//main function
int main() {
    int n, d;
    cin >> n >> d;
    cout << consecutivdays(d);;
    return 0;
}