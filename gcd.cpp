#include <iostream>
#include<bits/stdc++.h>
#include "gcd.hpp"
using namespace std;
int main()
{
    int a, b;
 
    while (1)
    {
        cout << "Enter two non zero number" << endl;
        cin >> a >> b;
          a= abs(a);
          b= abs(b);
        cout<<a<<" "<<b;
        if (a == 0 && b == 0)
        {
            cout << "only non zero number" << endl;
        }
        else
        {
            cout << gcd(a,b);
            break;
        }
    }
    return 0;
}