#include <bits/stdc++.h>

using namespace std;

//solution function
int aliceMoves() {
    string str; cin >> str;
    vector <int> vec_str;

    int count = 0, alice_score = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (ch == '1') {
            count++;
            if (i == str.length() - 1) vec_str.emplace_back(count);
        } else {
            vec_str.emplace_back(count);
            count = 0;
        }
    }
    sort(vec_str.begin(), vec_str.end(), greater<int>());
    for (int i = 0; i < vec_str.size(); i += 2) {
        alice_score += vec_str[i];
    }
    return alice_score;
}


//main function
int main() {
    int t; cin >> t;
    while (t--) cout << aliceMoves() << "\n";

    return 0;
}