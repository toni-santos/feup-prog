#include <iostream>
#include <cmath>
#include <time.h>
#include <string.h>

bool readFraction(int &numerator, int &denominator);
bool readInt(int &x);

using namespace std;

int main()
{

    int num, den;
    char sep;

    cout << "Input fraction as 'numerator / denominator': " << endl;
    cin >> num >> sep >> den;

    if (sep != '/')
    {
        cout << "0/0" << endl;
    }
    else
    {
        if (readFraction(num, den))
        {
            cout << num << '/' << den;
        }
        else
        {
            cout << "0/0" << endl;
        }
    }

    return 0;
}

bool readFraction(int &numerator, int &denominator)
{
    if (readInt(numerator) && readInt(denominator))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool readInt(int &x)
{
    bool works = false;

    if (cin.good() && cin.peek() == '\n')
    {
        works = true;
        return works;
    }
    return works;
}