#include <iostream>
using namespace std;
#ifndef gcd_hpp
#define gcd_hpp

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
#endif