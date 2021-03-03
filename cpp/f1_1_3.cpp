#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    float M,ro,r;
    double pii=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;

    cout<<"ro (kg/m^3), r (m)"<<endl;
    cin>>ro>>r;
    M=(4.0/3)*(ro*pii*pow(r,3));
    cout<<M<<endl;
    return 0;
}