#pragma once
#include <iostream>
using namespace std;
const int MAX1 = 4;
const int MAX2 = 5;
class Student {
private:
    int id;
    static int ID;
    char *DefoltName;
    int course;
    int group;
    char *DefoltNumberOfZachetka;
public:
    Student(int co, int gr, char *n, char *noz,int m1,int m2,int m3,int m4) : course(co), group(gr), DefoltName(n), DefoltNumberOfZachetka(noz)
    {}
    Student(int d):id(d)
    {}
    int getid() const;
    void getdata();
    int getcourse();
    int getgroup();
    string getname();
    string getzachetka();
    friend ostream &operator<<(ostream &out, const Student &student);
};
    ostream& operator <<(ostream &out,const Student &student);
class StudentAfterFirstSession:public Student
{
private:
    int marks1[MAX1];
public:
    StudentAfterFirstSession(int co, int gr, char *n, char *noz, int mark1, int mark2, int mark3, int mark4)
            : Student(co, gr, n, noz, mark1, mark2, mark3, mark4)
    {
       mark1 = marks1[0];
        mark2 = marks1[1];
        mark3 = marks1[2];
        mark4 = marks1[3];
    }
    float AverageYearGroupMark1();
    void getmarks();
    friend ostream& operator<< (ostream &out,const StudentAfterFirstSession &student);
    virtual void Averagemark();
};
ostream& operator <<(ostream &out,const  StudentAfterFirstSession &student);
class StudentAfterSecondSession:public StudentAfterFirstSession {
private:
    int marks2[MAX2];
public:
    StudentAfterSecondSession(int c, int g, char *n, char *noz,int mark1,int mark2,int mark3,int mark4,int mark5) : StudentAfterFirstSession(
            c, g, n, noz, mark1, mark2, mark3, mark4) {}

    void getmarks();

    friend ostream &operator<<(ostream &out, const StudentAfterSecondSession &student);
    void Averagemark();
};
    ostream &operator<<(ostream &out, const StudentAfterSecondSession &student);

