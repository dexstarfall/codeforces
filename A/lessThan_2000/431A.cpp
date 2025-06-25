#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2, a3, a4;
    string numbers = "";
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> numbers;

    int total_calories = 0;
    for (int i = 0; numbers[i] != '\0'; i++) {
        if (numbers[i] == '1') total_calories += a1;
        else if (numbers[i] == '2') total_calories += a2;
        else if (numbers[i] == '3') total_calories += a3;
        else if (numbers[i] == '4') total_calories += a4;
    }
    cout << total_calories;
    return 0;
}