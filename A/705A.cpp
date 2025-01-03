#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int n;
    cin >> n;
    
    string str;
    for (int i = 1; i <= n; i++) {
        str += (i % 2 == 1 ? "I hate " : "I love ");
        str += (i != n ? "that " : "it");
    }
    cout << str;
    return 0;
}