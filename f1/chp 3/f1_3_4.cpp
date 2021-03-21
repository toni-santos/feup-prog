#include <iostream>
#include <cmath>

using namespace std;

double round(double x, unsigned n);

int main()
{
    double x1;
    unsigned n1;

    cout << "Input a number: " << endl;
    cin >> x1;
    cout << "Input the number of decimal places: " << endl;
    cin >> n1;

    cout << round(x1, n1) << endl;

    return 0;
}

double round(double x, unsigned n)
{
    return floor(x * pow(10, n) + 0.5) / pow(10, n);
}