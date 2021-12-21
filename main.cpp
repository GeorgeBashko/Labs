#include <iostream>
#include "class.h"
using namespace std;
int main()
{
    Student student1(1,2,"Bob","22848",1,2,3,6);
    StudentAfterFirstSession student1AfterFirstSession(1, 2, "Bob", "22848", 0, 0, 0, 0);
    StudentAfterFirstSession *a = &student1AfterFirstSession;
    StudentAfterSecondSession student1AfterSecondSession(1,2,"Bob","22848",2,3,4,5,6);
    StudentAfterSecondSession *b = &student1AfterSecondSession;
    student1.getdata();
    student1AfterFirstSession.getmarks();
    student1AfterSecondSession.getmarks();
    cout<<student1;
    cout<<student1AfterFirstSession;
    a->Averagemark();
    cout<<student1AfterSecondSession;
    b->Averagemark();
    Student student2(student1);
    StudentAfterFirstSession student2AfterFirstSession(student1AfterFirstSession);
    StudentAfterFirstSession *c = &student2AfterFirstSession;
    StudentAfterSecondSession student2AfterSecondSession(student1AfterSecondSession);
    StudentAfterSecondSession *d = &student2AfterSecondSession;
    student2.getdata();
    student2AfterFirstSession.getmarks();
    student2AfterSecondSession.getmarks();
    cout<<student2;
    cout<<student2AfterFirstSession;
    c->Averagemark();
    cout<<student2AfterSecondSession;
    d->Averagemark();
    StudentAfterFirstSession* objects[10];
    objects[0] = new StudentAfterSecondSession(4, 2, nullptr, nullptr,6, 8, 8, 7,8);
    objects[1] = new StudentAfterSecondSession(1, 2, nullptr, nullptr,10, 5, 9, 8,9);
    cout<<"Average group mark: "<<(objects[0]->AverageYearGroupMark1() + objects[1]->AverageYearGroupMark1())/2;
    return 0;
}