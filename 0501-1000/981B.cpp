#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    unordered_map < int, int > company;
    
    for (int i = 0; i < n; ++i) {
        int key, value; cin >> key >> value;
        company[key] = value;
    }
    
    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int key, value; cin >> key >> value;
        company[key] = max(company[key], value);
        
        // another logic
        // if (company.find(key) == company.end()) {
        //     company[key] = value;
        // } else {
        //     company[key] = max(company[key], value); 
        // }
    }

    long long mx = 0;
    for (auto & p: company) {
        mx += p.second;
    }
    cout << mx << "\n";

    return 0;
}