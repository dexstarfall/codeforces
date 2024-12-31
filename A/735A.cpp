#include <bits/stdc++.h>
using namespace std;

bool can_Reach(string str, int k, int posG, int posT) {
    for (int i = posG; i <= posT; i += k) {
        if (str[i] == '#') return false;
        if (str[i] == 'T') return true;
    }
    return false;
}

int main() {
    int n, k;
    string str, copyStr;
    int posG = -1, posT = -1;
    cin >> n >> k;
    cin >> str;
    copyStr = str;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'G') posG = i;
        if (str[i] == 'T') posT = i;
    }
    if (posG > posT) {
        swap(posG, posT);
        swap(copyStr[posG], copyStr[posT]);
    }
    cout << (can_Reach(copyStr, k, posG, posT) ? "YES" : "NO");
    return 0;
}