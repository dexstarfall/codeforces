#include <bits/stdc++.h>
using namespace std;

// solution function
bool is_good(int n) {
    while (n--) {
        string str;
        int before, after;
        cin >> str >> before >> after;
        //if true
        if (before >= 2400 && before < after) return 1;
    }
    //if false
    return 0;
}

//main function
int main() {
    int n;
    cin >> n;
    cout << (is_good(n) ? "YES" : "NO");

    return 0;
}