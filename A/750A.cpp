#include <bits/stdc++.h>
using namespace std;

//no of questions can solve in given time
int noOfQuestions(int n, int time_left) {
    if (time_left < 5) return 0;
    
    for (int i = 1; i <= n; i++) {
        time_left -= 5 * i;
        if (time_left < 5 * (i + 1)) return i;
    }
    return n;
}

//main function
int main() {
    int n, k;
    cin >> n >> k;
    cout << noOfQuestions(n, (240 - k));
    return 0;
}