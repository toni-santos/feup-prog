#include <iostream>
#include <cmath>

using namespace std;

double area(double x1, double y1, double x2, double y2, double x3, double y3);
double distance(double x1, double y1, double x2, double y2);

int main()
{

    char a;
    double x1, y1, x2, y2, x3, y3;

    cout << "What do you wish to calculate? ('a' for area of triangle 'd' for distance between two points)" << endl;
    cin >> a;

    switch (a)
    {
    case ('a'):

        cout << "Input the coordinates (x,y) of the 1st point:" << endl;
        cin >> x1 >> y1;
        cout << "Input the coordinates (x,y) of the 2nd point:" << endl;
        cin >> x2 >> y2;
        cout << "Input the coordinates (x,y) of the 3rd point:" << endl;
        cin >> x3 >> y3;
        cout << "The area of the triangle is: " << area(x1, y1, x2, y2, x3, y3);
        break;

    case ('d'):

        cout << "Input the coordinates (x,y) of the 1st point:" << endl;
        cin >> x1 >> y1;
        cout << "Input the coordinates (x,y) of the 2nd point:" << endl;
        cin >> x2 >> y2;
        cout << distance(x1, y1, x2, y2);
        break;

    }
}

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{

    double dAB, dAC, dCB, s, A;

    dAB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    dAC = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    dCB = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    s = (dAB + dAC + dCB) / 2;
    A = sqrt(s * (s - dAB) * (s - dAC) * (s - dCB));

    return A;
}

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}