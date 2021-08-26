#include <iostream>
#include "gcd.hpp"
using namespace std;
int main()
{
    int n;
    cout << " Enter An Positive Number ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (gcd(i, j) == 1)
            {
                count++;
            }
        }
    }

    cout << endl
         << (2 * count + 1) / (double(n) * double(n));
}