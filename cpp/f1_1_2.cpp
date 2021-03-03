#include <iostream>
using namespace std;

int main(){

    float A,B,C;
    float mean;

    cout<<"Please, input 3 integer numbers: "<<endl;
    cin>>A>>B>>C;
    mean=(A+B+C)/3;
    cout<<mean<<endl;
    cout<<A-mean<<endl;
    cout<<B-mean<<endl;
    cout<<C-mean<<endl;

    return 0;
}