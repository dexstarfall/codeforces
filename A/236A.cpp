#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());
    cout << (st.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

    return 0;
}