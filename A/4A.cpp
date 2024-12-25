#include <iostream>
using namespace std;
 
int main()
{
    int wWatermelon;
    cin >> wWatermelon;
    if (wWatermelon != 2 and wWatermelon % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}