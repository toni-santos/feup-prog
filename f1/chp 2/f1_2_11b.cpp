#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i, j, fact = 1;
    double temp;

    cout << "number\t";
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        temp += 1.0 / fact;
        fact = 1;
    }

    cout << 1 + temp << endl;

    return 0;
}