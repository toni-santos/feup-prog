#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    int LenArr, i, sum, mean, devi, small, big;

    cout << "Please specify the length of the sequence you want to create.\t" << endl;
    cin >> LenArr;
    int array[LenArr];

    for (i = 0; i < LenArr; i++)
    {
        cout << "Element number " << i + 1 << "\t";
        cin >> array[i];
    }

    // Sum

    for (i = 0; i < LenArr; i++)
    {
        sum += array[i];
    }

    // Mean

    mean = float(sum) / LenArr;

    // Std deviation

    for (i = 0; i < LenArr; i++)
    {
        devi += sqrt(pow((array[i] - mean), 2) / float(LenArr - 1));
    }

    // Biggest/Smallest elems

    small = *min_element(array, array + LenArr);
    big = *max_element(array, array + LenArr);

    cout << "The mean value is: " << mean << endl;
    cout << "The sum value is: " << sum << endl;
    cout << "The standard deviation value is: " << devi << endl;
    cout << "The largest value is: " << big << endl;
    cout << "The smallest value is: " << small << endl;

    return 0;
}