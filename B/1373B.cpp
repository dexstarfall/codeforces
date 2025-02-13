#include <bits/stdc++.h>

using namespace std;

//main function
int main() {
    int t; cin  >> t;
    while (t--) {
        string num_str; cin >> num_str;
        int count_1 = 0, count_0 = 0; 
        for (int i = 0; i < num_str.length() ; i++ ){
            if (num_str[i] == '1') count_1++;
            else if (num_str[i] == '0') count_0++;
        }
        cout << ( min (count_1, count_0) % 2 != 0 ? "DA" : "NET") << "\n";
    }
    return 0;
}