#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, i;
    bool prim = true;

    cout << "inpt num" << endl;
    cin >> n;

    if (n > 2)
    {
        for (i = 2; i <= int(sqrt(n)) + 1; i++)
        {
            if ((n % i) != 0)
            {
                continue;
            }
            else
            {
                prim = false;
                break;
            }
        }
    }

    if (n == 2)
    {
        cout << "The number is prime.";
    }
    else if (n == 1)
    {
        cout << "The number is not prime.";
    }
    else
    {
        if (prim)
        {
            cout << "The number is prime.";
        }
        else
        {
            cout << "The number is not prime.";
        }
    }
    return 0;
}