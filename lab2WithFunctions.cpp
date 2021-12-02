#include <iostream>
#include <cmath>
#include "tests.h"
using namespace std;
int main()
{
    const int size = 20;
    double *array = new double[size];
    int size1 = getsize(size);
    PrintArray(array,size1);
    cout << "Sum of array elements with odd numbers: " << SumOddNumbers(array,size1) << endl;
    cout << "Sum of elements between first and last negative number: " << SumBetZero(array,size1) << endl;
    TransformMassive(array,size1);
    runtests();
    delete[] array;
    return 0;
}
