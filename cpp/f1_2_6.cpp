#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n, q, j, amnt;

    cout << "n,q,j" << endl;
    cin >> n >> q >> j;

    amnt = q * pow(1 + (j / 100), n);

    cout << amnt << endl;

    return 0;
}