#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string str; cin >> str;
    
    if (str.length() == 1 && k !=0) {
        cout << 0 << "\n";
    } else {
        if (str[0] != '1' && k !=0){ 
            str[0] = '1';
            k--;
        }
        for (int i = 1; i <= k; i++) {
            if (i==n) break;
            if(str[i] == '0') k++;
            else str[i] = '0';
        }
        cout << str << "\n";
    }
    return 0;
}