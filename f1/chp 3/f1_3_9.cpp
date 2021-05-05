#include <iostream>
#include <cmath>

using namespace std;

bool leap(const int y);o

void main(){
    int y;

    cout << "input a year! " << endl;
    cin >> y;

    cout << leap(y) << endl;
}

bool leap(const int y){
    if (y%4 == 0 && y%100 != 0){
        return true;
    }
    return false;
}