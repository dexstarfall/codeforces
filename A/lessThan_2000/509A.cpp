#include <bits/stdc++.h>
using namespace std;


long long find_max_in_table(int num) {
    num = 2 * num - 2;
    long long answer = 1;
    for (int i = num, j = 1; i > num / 2; i--, j++) {
        answer *= i;
        answer /= j;
    }
    return answer;
}

int main() {
    int n;
    cin >> n;
    cout << find_max_in_table(n);
    return 0;
}