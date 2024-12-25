#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a = 0, b, count = 0;
    for (int i = 0; i <= sqrt(n); i++)
    {   
        a = i, b = n - (a * a);
        if (a + (b * b) == m) count++;
    }
    cout << count;

    return 0;
}