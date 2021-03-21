#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n);

int main()
{

    char a;
    int num, i, cnt;
    unsigned long big = ULONG_MAX;

    cout << "'1' to check if number is prime\n'2' to see all primes <1000\n'3' to check the first 100 primes\n'4' largest prime number computable with an unsigned long variable\n";
    cin >> a;

    switch (a)
    {
    case ('1'): //2.7.a
        cout << "insert a number" << endl;
        cin >> num;
        cout << IsPrime(num);
        if (IsPrime(num))
        {
            cout << "The number is prime" << endl;
        }
        else
        {
            cout << "The number is not prime" << endl;
        }
        break;
    case ('2'): //2.7.b
        for (i = 2; i <= 1000; i++)
        {
            if (IsPrime(i))
            {
                cout << i << "\t";
            }
        }
        break;
    case ('3'): //2.7.c
        for (i = 2; i <= 10000; i++)
        {
            if (cnt == 100)
            {
                break;
            }
            if (IsPrime(i))
            {
                cout << i << "\t";
                cnt++;
            }
        }
        break;
    case ('4'): //2.7.d
        for (big; IsPrime(big); big--)
        {
            if (IsPrime(big))
            {
                cout << big << endl;
                break;
            }
        }
        break;
    }

    return 0;
}

bool IsPrime(int n)
{

    bool prim = true;
    int i;

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
        return true;
    }
    else if (n == 1)
    {
        return false;
    }
    else
    {
        if (prim)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return 0;
}