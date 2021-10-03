#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    double x, xk, xp, dx, a, b, c, F;

    cout << "xk = "; cin >> xk;
    cout << "xp = "; cin >> xp;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << fixed;
    cout << "----------------------------" << endl;
    cout << "|" << setw(5) << "x" << "|";
    cout << setw(7) << "F" << "|" << endl;
    cout << "----------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (c < 0 && x != 0)
            F = (-a * x) - c;
        else
            if (c > 0 && x == 0)
                F = (x - a) / (-c);
            else
                F = (b * x) / (c - a);
        cout << "|" << setw(7) << setprecision(2) << F;
        cout << "  |" << setw(10) << setprecision(3) << x;
        cout << "    |" << endl;
        x += dx;
    } 
    cout << "----------------------------" << endl;

    return 0;
}