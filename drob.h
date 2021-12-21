#ifndef DROB_H
#define DROB_H
#pragma once
class Fraction {
private:
    int chisl;
    int znam;
public:
    Fraction(int ch,int zn);
    Fraction(const int &drob1);
    int sumchisl(Fraction drob1,Fraction drob2);
    int sumznam(Fraction drob1,Fraction drob2);
    int umnznam(Fraction drob1,Fraction drob2);
    int umnchisl(Fraction drob1,Fraction drob2);
    int delznam(Fraction drob1,Fraction drob2);
    int delchisl(Fraction drob1,Fraction drob2);
    Fraction umn(Fraction drob1,Fraction drob2);
    Fraction sum(Fraction drob1,Fraction drob2);
    Fraction del(Fraction drob1,Fraction drob2);
    void show();
     int sokr(int a, int b);
};
#endif