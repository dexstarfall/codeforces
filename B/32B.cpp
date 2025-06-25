#include <bits/stdc++.h>
 
using namespace std;
 
// solution function
string solve(string str) {
    string str2;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '.') str2 += '0';
        else if (str[i] == '-' && str[i + 1] == '.') str2 += '1', i++;
        else if (str[i] == '-' && str[i + 1] == '-') str2 += '2', i++;
    }
    return str2;
}
 
//main function
int main() {
    string str;
    cin >> str;
    cout << solve(str);
    return 0;
}