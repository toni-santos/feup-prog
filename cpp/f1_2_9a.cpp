#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, n1, n2;

    cout << "insert a 3 digit number\t";
    cin >> n;
    n1 = n % 10;
    n2 = int(n / 100);

    if (n1 == n2)
    {
        cout << "palindrome";
    }

    return 0;
}