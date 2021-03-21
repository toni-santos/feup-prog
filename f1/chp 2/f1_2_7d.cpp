#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    unsigned long n = ULONG_MAX;
    int i;
    bool prim = false;
    for (n; prim; n--)
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
        prim = false;
    }
    cout<<n;

    return 0;
}