#include <iostream>
#include <cmath>

using namespace std;

double GCD(double n1, double n2);
double GCDpr(double n1, double n2, double &gg);

int main()
{
    double n1, n2, gg;

    cout << "Input 2 numbers:\t";
    cin >> n1 >> n2;

    if (n1 == n2)
    {
        cout << n1;
    }
    else if (n1 == 0)
    {
        cout << n2;
    }
    else if (n2 == 0)
    {
        cout << n1;
    }
    else
    {
        cout << GCD(n1, n2) << endl;
        GCDpr(n1, n2, gg);
        cout << gg;
    }

    return 0;
}

// using return value

double GCD(double n1, double n2)
{
    if (n1 < n2)
    {
        return GCD(n1, n2 - n1);
    }
    else if (n2 < n1)
    {
        return GCD(n1 - n2, n2);
    }
    else
    {
        return n1;
    }

    return 0;
}

// using pass by reference

double GCDpr(double n1, double n2, double &gg)
{
    if (n1 < n2)
    {
        return GCDpr(n1, n2 - n1, gg);
    }
    else if (n2 < n1)
    {
        return GCDpr(n1 - n2, n2, gg);
    }
    else
    {
        gg = n1;
    }

    return 0;
}
