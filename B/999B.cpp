#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string str; cin >> str;
    
    vector < int > divisors;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
            divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    
    for (int i = 1; i < divisors.size(); i++) {
        string temp_str = "";
        int end = divisors[i];
        for (int j = end-1; j>=0 ;j--){
            temp_str += str[j];
        }
        str.replace(0, end, temp_str);
    }
    
    cout<< str;
    return 0;
}