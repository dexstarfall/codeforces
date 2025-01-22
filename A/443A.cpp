#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch = '{';
    unordered_set <char> u_set;
    while (ch != '}') {
        cin >> ch;
        if (ch >= 'a' && ch <= 'z')
            u_set.insert(ch);
    }

    cout << u_set.size();
    return 0;
}