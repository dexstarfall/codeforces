#include <bits/stdc++.h>
using namespace std;

// solution function
bool solve() {
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '4' || str[i] == '7') {
            count++;
        }
    }
    if (count == 4 || count == 7) {
        return 1;
    } else {
        return 0;
    }
}

//main function
int main() {
    if (solve()) cout << "YES";
    else cout << "NO";
    return 0;
}