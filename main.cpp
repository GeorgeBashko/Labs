#include <iostream>
#include "drob.h"
using namespace std;
int main()
{
    Fraction drob1(-1, 5);
    Fraction drob2(3,4);
    Fraction drob3(drob1);
    Fraction drob4 = drob3.sum(drob1,drob2);
    cout<<"Sum is: ";
    drob4.show();
    Fraction drob5 = drob3.umn(drob1,drob2);
    cout<<"Product is: ";
    drob5.show();
    cout<<"Division is: ";
    Fraction drob6 = drob3.del(drob1,drob2);
    drob6.show();
    return 0;
}
