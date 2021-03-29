#include <iostream>
#include <cmath>
#include <time.h>
#include <string.h>

bool readInt(int &x);

using namespace std;

int main()
{
    int x;

    cout << "input num? " << endl;
    cin >> x;

    if (readInt(x))
    {
        cout << "integer" << endl;
    }
    else
    {
        cout << "not an integer" << endl;
    }

    return 0;
}

bool readInt(int &x)
{
    bool works=false;

    if (cin.good() && cin.peek() == '\n')
    {
        works=true;
        return works;
    }
    return works;
}