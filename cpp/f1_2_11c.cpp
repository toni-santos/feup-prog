#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i, j, fact = 1, exp;
    double temp;

    cout << "number & exp\t";
    cin >> n >> exp;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        if (i % 2 == 0)
        {
            temp += pow(exp, i) / fact;
        }
        else
        {
            temp -= pow(exp, i) / fact;
        }
        fact = 1;
    }

    cout << 1 + temp << endl;

    return 0;
}