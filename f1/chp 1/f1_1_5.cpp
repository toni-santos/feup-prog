#include <iostream>

using namespace std;

int main()
{

    int t1h, t2h, t1m, t2m, t1s, t2s;
    int td, th, tm, ts;
    char c;

    cout << "time 1? ";
    cin >> t1h >> c >> t1m >> c >> t1s; //take in the 1st time
    cout << "time 2? ";
    cin >> t2h >> c >> t2m >> c >> t2s; //take in the 2nd time

    if ((t1s + t2s) >= 60) //convert seconds to minutes
    {
        t1m++;
        ts = (t1s + t2s) - 60;
    }
    else
    {
        ts = t1s + t2s;
    }
    if ((t1m + t2m) >= 60) //convert mintutes to hours
    {
        t1h++;
        tm = (t1m + t2m) - 60;
    }
    else
    {
        tm = t1m + t2m;
    }
    if ((t1h + t2h) >= 24) //convert hours to days
    {
        td++;
        th = (t1h + t2h) - 24;
    }
    else
    {
        th = t1h + t2h;
    }

    cout << td << ":" << th << ":" << tm << ":" << ts; //return to console the result

    return 0;
}