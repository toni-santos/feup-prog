#include <iostream>
using namespace std;

int main(){

    double a, b;
    
    cout<<"n1 n2? \t";
    cin>>a>>b;

    if ((a+b) > INT_MAX) {
        cout<<"sum overflow";
    }else if ((a+b) < INT_MIN) {
        cout<<"sum underflow";
    }else {
        cout<<a+b;
    }

    return 0;
}