#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int n; cin >> n;
    string str; cin >> str;
    int x = 0, y= 0, count = 0;
    for (int i=0; i<n; i++) {
        if (str[i] == 'R') x++;
        else y++;
        
        if (x==y && str[i] == str[i+1]) {
            if(i+1 == n) break;
            count++;
        }
    }
    cout << count;
    return 0;
}