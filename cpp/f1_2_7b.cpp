#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, i;
    bool prim = false;

    for (n = 2; n <= 1000; n++)
    {
        for (i = 2; i <= int(sqrt(n)) + 1; i++)
        {
            if ((n % i) == 0)
            {
                prim = true;
                break;
            }
        }
        if (!prim)
        {
            cout << n << endl;
        }
        prim=false;
    }
    return 0;
}