#include "drob.h"
#include <iostream>
#include<cassert>
using namespace std;
Fraction::Fraction(int ch, int zn) {
assert(znam != 0);
    chisl = ch;
    znam = zn;
}

void Fraction::show()
{
    Fraction drobA(chisl,znam);
    int y = sokr(chisl,znam);
    cout<<drobA.chisl/y<<'/'<<drobA.znam/y<<endl;
}
int Fraction::sumchisl(Fraction drob1,Fraction drob2)
{
    int ch1 = drob1.chisl*drob2.znam+drob2.chisl*drob1.znam;
    return ch1;
}
int Fraction::sumznam(Fraction drob1,Fraction drob2)
{

    int zn1 = drob1.znam*drob2.znam;
    return zn1;
}
Fraction Fraction::sum(Fraction drob1, Fraction drob2)
{
    int ch1 = sumchisl(drob1,drob2);
    int zn1 = sumznam(drob1,drob2);
    Fraction drobA(ch1,zn1);
    return drobA;
}
Fraction Fraction::umn(Fraction drob1, Fraction drob2)
{
    int ch1 = umnchisl(drob1,drob2);
    int zn1 = umnznam(drob1,drob2);
    Fraction drobA(ch1,zn1);
    return drobA;
}
int Fraction::umnznam(Fraction drob1,Fraction drob2)
{
    int zn1 = drob1.znam*drob2.znam;
    return zn1;
}
int Fraction::umnchisl(Fraction drob1,Fraction drob2)
{
    int ch1 = drob1.chisl*drob2.chisl;
    return ch1;
}
int Fraction::delchisl(Fraction drob1,Fraction drob2)
{
    int ch1 = drob1.chisl*drob2.znam;
    return ch1;
}
int Fraction::delznam(Fraction drob1,Fraction drob2)
{
    int zn1 = drob1.znam*drob2.chisl;
    return zn1;
}
Fraction Fraction::del(Fraction drob1,Fraction drob2)
{
    int ch1 = delchisl(drob1,drob2);
    int zn1 = delznam(drob1,drob2);
    Fraction drobA(ch1,zn1);
return drobA;
}
int Fraction::sokr(int a, int b) {

    int nod = 1;
    for (int i = abs(a); i > 0; i--) {
        if ((abs(a)) % i == 0 && (abs(b)) % i == 0) {
            nod = i;
            break;
        }
    }
    return nod;
}
/*void Fraction::sokr(int ch, int zn)
{
    int i = 1;
    while(i<ch && i<zn)
    {
        if(ch%i == 0 && zn%i ==0)
        {
            ch/=i;
            zn/=i;
        }
    }
    cout<<ch<<'/'<<zn;
}*/