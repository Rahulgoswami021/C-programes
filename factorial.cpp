#include <iostream>
using namespace std;
int main()
{
    long int n;
    while (1)
    {
        cout << "Enter An Positive Number" << endl;
        cin >> n;
        int fac = 1;
        if (n < 0)
        {
            cout << "Only non Negitive Number " << endl;
        }
        else
        {
            while (n >= 0)
            {
                if (n == 0)
                {
                    fac *= 1;
                }
                else
                {
                    fac *= n;
                }
                n--;
            }
            cout << "Factorial value is " << fac << endl;

            break;
        }
    }

    return 0;
}