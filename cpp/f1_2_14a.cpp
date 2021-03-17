#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int i;
    double delta, nMaxIter, n, rq = 1, rqn;

    cout << "delta, nMaxIter, n\t";
    cin >> delta >> nMaxIter >> n;

    for (i = 1; i <= nMaxIter; i++)
    {

        rqn = (rq + n / rq) / 2;

        if (n - pow(rq, 2) <= delta)
        {
            break;
        }

        rq=rqn;
    }

    cout << rqn;

    return 0;
}