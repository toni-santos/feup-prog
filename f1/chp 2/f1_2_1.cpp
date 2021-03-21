#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, e, f; //values
    float x, y;             //incognitas

    cout << "dizer abcdef" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);
    if ((a * e - b * d) == 0)
    {
        cout << "muridayo" << endl;
    }
    else if (x == 0 || y == 0)
    {
        cout << "ikkan-sei no nai" << endl;
    }
    else
    {
        cout << x << " " << y << endl;
    }

    return 0;
}