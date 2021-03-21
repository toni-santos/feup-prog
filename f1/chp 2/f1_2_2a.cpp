#include <iostream>
using namespace std;

int main()
{

    int inpt[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        cout << "number " << i + 1 << ":\t";
        cin >> inpt[i];
    }

    if (inpt[0] >= inpt[1] && inpt[0] >= inpt[2])
    {
        cout << "the maximum value is: " << inpt[0] << endl;
    }
    else if (inpt[1] >= inpt[0] && inpt[1] >= inpt[2])
    {
        cout << "the maximum value is: " << inpt[1] << endl;
    }
    else
    {
        cout << "the maximum value is: " << inpt[2] << endl;
    }

    if (inpt[0] <= inpt[1] && inpt[0] <= inpt[2])
    {
        cout << "the minimum value is: " << inpt[0] << endl;
    }
    else if (inpt[1] <= inpt[0] && inpt[1] <= inpt[2])
    {
        cout << "the minimum value is: " << inpt[1] << endl;
    }
    else
    {
        cout << "the minimum value is: " << inpt[2] << endl;
    }

    return 0;
}