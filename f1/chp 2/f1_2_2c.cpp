#include <iostream>

using namespace std;

int main()
{

    int inpt[3];
    int outpt[3] = {0, 0, 0};
    int i;

    for (i = 0; i < 3; i++)
    {
        cout << "number " << i + 1 << ":\t";
        cin >> inpt[i];
    }

    if (inpt[0] >= inpt[1] && inpt[0] >= inpt[2] && inpt[1] >= inpt[2])
    {
        outpt[0] = inpt[0];
        outpt[1] = inpt[1];
        outpt[2] = inpt[2];
    }
    else if (inpt[0] >= inpt[1] && inpt[0] >= inpt[2] && inpt[2] >= inpt[1])
    {
        outpt[0] = inpt[0];
        outpt[1] = inpt[2];
        outpt[2] = inpt[1];
    }
    else if (inpt[1] >= inpt[0] && inpt[1] >= inpt[2] && inpt[0] >= inpt[2])
    {
        outpt[0] = inpt[1];
        outpt[1] = inpt[0];
        outpt[2] = inpt[2];
    }
    else if (inpt[1] >= inpt[0] && inpt[1] >= inpt[2] && inpt[2] >= inpt[0])
    {
        outpt[0] = inpt[1];
        outpt[1] = inpt[2];
        outpt[2] = inpt[0];
    }
    else if (inpt[1] >= inpt[0])
    {
        outpt[0] = inpt[2];
        outpt[1] = inpt[1];
        outpt[2] = inpt[0];
    }
    else
    {
        outpt[0] = inpt[2];
        outpt[1] = inpt[0];
        outpt[2] = inpt[1];
    }

    if (outpt[0] <= (outpt[1] + outpt[2]))
    {
        cout << "it do be able to be a triangle";
    }
    else
    {
        cout << "it do not triangle";
    }

    return 0;
}
