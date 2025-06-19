#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int flip_count = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
            flip_count++;
        else if ((ch >= '0' and ch <= '9') and (ch - '0') % 2 == 1)
            flip_count++;
    }

    cout << flip_count;
    return 0;
}
