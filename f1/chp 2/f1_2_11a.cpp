#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    double temp;

    cout << "number\t";
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            temp += 4.0 / (2 * i + 1);

        }
        else
        {
            temp -= 4.0 / (2 * i + 1);
        }
    }

    cout << 4 + temp << endl;

    return 0;
}