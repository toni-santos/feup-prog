#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, i, cnt;
    bool prim = false;

    for (n = 2; n <= 10000; n++)
    {
        if (cnt == 100)
        {
            break;
        }
        else
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
                cnt++;
            }
            prim = false;
        }
    }
    return 0;
}