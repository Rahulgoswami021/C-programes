#include <bits/stdc++.h>
using namespace std;
void xy2polar(double x, double y, double &r, double &t)
{
    r = sqrt(pow(x, 2) + pow(y, 2));
    t = atan(x / y);
    
}
void polar2xy(double r, double t, double &x, double &y)
{
    
    x = r * cos(t);
    y = r * sin(t);
  
}