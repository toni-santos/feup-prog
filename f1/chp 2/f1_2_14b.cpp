#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int i, j, cnt;
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

        rq = rqn;
    }

    for (j = 0; delta <= 1; j++)
    {
        delta*=10;
        cnt+=1;
    }

    cout << setprecision(cnt) << rqn << endl;
    cout << setprecision(cnt) << sqrt(n);

    return 0;
}