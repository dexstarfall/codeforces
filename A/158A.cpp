// 8 5
// 10 9 8 7 7 7 5 5
// output : 6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, count = 0;
    cin >> n >> p;

    int list[n];
    for (int &i : list) cin >> i;
    for (int i = 0; i < n; i++)
    {
        if (list[i] >= list[p - 1] && list[i] !=0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}