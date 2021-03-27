#include <iostream>
#include <cmath>
#include <time.h>
#include <string.h>

time_t timeElapsed();

using namespace std;

int main()
{

    time_t start, check;
    string go;

    cout << "START";
    getchar();
    start=timeElapsed();

    while (true){
        
        cout << "press any key to check time";
        getchar();
        check=timeElapsed();
        cout << check-start << endl;
    }
}

time_t timeElapsed()
{
    time_t RN=time(NULL);
    return RN;
}