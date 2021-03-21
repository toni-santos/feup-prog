#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    float n, n1, n2;
    int len;

    cout << "insert a number\t";
    cin >> n;

    while (n>0){
        n/=10;
        len++;
    }

    cout << n/(pow(10,int(len/2))) << endl;
    if (len%2!=0){
        n1=n/int(pow(10,(len/2)));
        n2=int(n/(pow(10,int((len/2)+2))));
    }
    /* cout<<n1<<'\n'<<n2<<endl; */
    if (n1 == n2)
    {
        cout << "palindrome";
    }

    return 0;
}