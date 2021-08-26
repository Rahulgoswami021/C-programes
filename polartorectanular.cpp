#include <iostream>
#include "p2r.hpp"
using namespace std;
int main()
{
    int n;
    double x, y, r, t;

    while (1)
    {   cout<<endl<<endl;
        cout << "Press \"1\" to rectangular to polar" << endl;
        cout << "Press \"2\" to polar to rectangular " << endl;
        cout << "Press \"0\" to exit " << endl;
        cin >> n;
        if (n == 1)
        {
            cout << "Enter value of \"X\" And \"Y\" co-ordinate" << endl;
            cin >> x >> y;
            xy2polar(x, y, r, t);
            cout << "r = " << r << endl;
            cout << "t = " << t << endl;
        }
        else if (n == 2)
        {
            cout << "Enter value of \"r\" And \"Theta(in radian) \" " << endl;
            cin >> r >> t;
            polar2xy(r, t, x, y);
            cout << "X = " << x << endl;
            cout << "Y = " << y << endl;
        }
        else if (n == 0)
        {
            break;
        }
        else
        {
            cout << ".....Invalid Input...." << endl;
        }
    }
    return 0;
}