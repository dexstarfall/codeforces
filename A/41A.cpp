#include <bits/stdc++.h>
using namespace std;

// solution function
bool solve(string str1, string str2) {
    int n = max(str1.length(), str2.length());
    for (int i = n-1, j = 0; j < n; i--, j++) {
        if (str1[i] != str2[j]) return 0;
    }
    return 1;
}

//main function
int main() {
    string str1 ,str2;
    cin >> str1 >> str2;
    cout << (solve(str1, str2) ? "YES" : "NO");
    return 0;
}
