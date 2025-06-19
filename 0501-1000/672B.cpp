#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string str; cin >> str;
	unordered_set<char> str2;
	
	for (auto it: str) str2.insert(it);

    int canChange = 26 - str2.size();
    int toChange = n - str2.size();
	cout << ( canChange >= toChange ? toChange : -1 );
}
