#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    double min, max, inter;
    int i;

    cout << "minimum angle, maximum angle, interval\t";
    cin >> min >> max >> inter;
    cout << "ang\t\t"
         << "sin\t\t"
         << "cos\t\t"
         << "tan\t\t" << endl;
    i = min;

    while (i != max+inter)
    {
        if (i != 0)
        {
            cout << i << setw(22) << sin(i) << setw(16) << cos(i) << setw(17) << tan(i) << endl;
            i = i + inter;
        }
        else
        {
            cout << i << setw(16) << sin(i) << setw(16) << cos(i) << setw(16) << tan(i) << endl;
            i = i + inter;
        }
    }

    return 0;
}