#include <iostream>
using namespace std;

int main()
{

    int wei;

    cout << "weight?\t";
    cin >> wei;

    if (wei <= 500)
    {
        cout << 5 << " eur";
    }
    else if (wei > 500 && wei <= 1000)
    {
        cout << 5 + ((wei - 500) / 100) * 1.5 << " eur";
    }
    else
    {
        cout << 12.5 + ((wei - 1000) / 250) * 5 << " eur";
    }

    return 0;
}