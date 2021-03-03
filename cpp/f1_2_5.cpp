#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c;  //coeficient vars
    float ind, r1, r2;  //operational vars, independent binomial & roots
    double r, u;

    cout<<"Insert the coeficients (a b c):\t";
    cin>>a>>b>>c;

    ind=pow(b,2)-4*a*c;
    
    if (ind>0){
        r1=(-b+sqrt(ind))/(2*a);
        r2=(-b-sqrt(ind))/(2*a);
        cout<<"The equation has 2 real roots: "<< r1 << "and" << r2;
    }else if(ind==0){
        r1=(-b)/(2*a);
        cout<<"The equation has 2 equal real roots: "<< r1;
    }else{
        u=sqrt(-ind)/(2*a);
        r=-b/(2*a);
        cout << "The equation has 2 complex roots: "<< r << " + " << u << "i and "<< r << " - " << u << "i";
    }

    return 0;
}