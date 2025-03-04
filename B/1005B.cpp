#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    string str_1, str_2; cin>> str_1 >> str_2;
    int len1 = str_1.length(), len2 = str_2.length();
    
    if (str_1[len1-1] != str_2[len2-1]) {
        cout << len1 + len2;
    } else {
        int min_size =min(len1, len2);
        int it1 = len1 - 1,it2 = len2 - 1;
        int count = 0, moves= len1 + len2;
        while(min_size--){ 
            if (str_1[it1] != str_2[it2]) break;
            it1--,it2--,count++;
        }
        moves -= 2 * count;
        cout << moves;
    }

    return 0;
}