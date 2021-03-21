#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float ax, ay, bx, by, cx, cy; //points
    float dAB, dAC, dCB;          //distances between points
    float s, area;                //semi-perimeter and area

    cout << "Insert first vector (a) coordinates: ";
    cin >> ax >> ay;
    cout << "Insert second vector (b) coordinates: ";
    cin >> bx >> by;
    cout << "Insert third vector (c) coordinates: ";
    cin >> cx >> cy;

    dAB = sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
    dAC = sqrt(pow((cx - ax), 2) + pow((cy - ay), 2));
    dCB = sqrt(pow((bx - cx), 2) + pow((by - cy), 2));
    s = (dAB + dAC + dCB) / 2;
    area = sqrt(s * (s - dAB) * (s - dAC) * (s - dCB));

    cout << "The area of the triangle is: " << area;

    return 0;
}