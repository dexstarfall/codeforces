#include <bits/stdc++.h>
using namespace std;

// solution function
bool solve(string str) {
    for (int i = str.length() - 1; i >= 0; i--) {
        char c = tolower(str[i]);
        if (isalpha(c)) {
            return ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') || (c == 'y'));
        }
    }
    return 0;

}

//main function
int main() {
    string str;
    getline(cin, str);
    cout << (solve(str) ? "YES" : "NO");
    return 0;
}