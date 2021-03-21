#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int ran1 = rand() % 8 + 2, ran2 = rand() % 8 + 2, res;

    cout << ran1 << " * " << ran2 << "?\t" << endl;
    clock_t startTime = clock();
    cin >> res;
    clock_t endTime = clock();
    cout<< (endTime - startTime) / 1000<< endl;
    if (res == ran1 * ran2 & ((endTime - startTime) / 1000) < 5)
    {
        cout << "Good" << endl;
    }
    else if (res == ran1 * ran2 & (5 <= ((endTime - startTime) / 1000) <= 10))
    {
        cout << "Satisfactory" << endl;
    }
    else if (res == ran1 * ran2 & (((endTime - startTime) / 1000)>10))
    {
        cout << "Insufficient" << endl;
    }
    else if (res != ran1)
    {
        cout << "Very Bad" << endl;
    }
}