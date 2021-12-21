#include "class.h"
    int Student::getid() const
    {
        return id;
    }
    void Student::getdata()
    {
    char name[30];
    char numberOfZachetka[30];
    char* DefoltName = name;
        cout<<"Enter a student's name: ";cin>>name;
        char *DefoltNumberOfZachetka = numberOfZachetka;
        cout<<"Enter a number of zachetka: ";cin>>numberOfZachetka;
        cout<<"Enter a number of group: ";cin>>group;
        cout<<"Enter a number of course: ";cin>>course;
    }
int Student::getcourse()
{
    return course;
}
int Student::getgroup()
{
    return group;
}
string Student::getname()
{
    return DefoltName;
}
string Student::getzachetka()
{
    return DefoltNumberOfZachetka;
}
ostream& operator <<(ostream &out,const Student &student)
{
    out<<"Name: "<<student.DefoltName<<endl<<"Course: "<<student.course<<endl<<"Group: "<<student.group<<endl<<"Number of zachetka: "<<student.DefoltNumberOfZachetka<<endl<<"ID: "<<abs(student.getid())<<endl<<"************************"<<endl;
    return out;
}
void StudentAfterFirstSession::getmarks()
    {
        cout<<"Enter marks after first session"<<endl<<"------------------------"<<endl;
        for(int i = 0;i<4;i++)
        {
            cout<<"Enter a mark: ";
            cin>>marks1[i];
        }
    }
    float StudentAfterFirstSession::AverageYearGroupMark1() {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += marks1[i];
    }
    return sum / 5.0;
}
     void StudentAfterFirstSession::Averagemark()
    {
        int sum = 0;
        for(int i = 0;i<4;i++)
        {
            sum+=marks1[i];
        }
        double avmark = (sum)/4.00;
        cout<<"Average mark: "<<avmark<<endl<<"************************"<<endl;
    }
ostream& operator <<(ostream &out,const  StudentAfterFirstSession &student)
{
    out<<"Marks after first session"<<endl<<"************************"<<endl<<"Algebra: "<<student.marks1[0]<<endl<<"Geometry: "<<student.marks1[1]<<endl<<"Programming: "<<student.marks1[2]<<endl<<"Mat.analiz: "<<student.marks1[3]<<endl<<"************************"<<endl;
    return out;
}
    void StudentAfterSecondSession::getmarks()
    {
        cout<<"Enter marks after second session"<<endl<<"------------------------"<<endl;
        for(int i = 0;i<5;i++)
        {
            cout<<"Enter a mark: ";
            cin>>marks2[i];
        }
        cout<<"************************"<<endl<<"Information about student"<<endl;
    }
    void StudentAfterSecondSession::Averagemark()
    {
        int sum = 0;
        for(int i = 0;i<5;i++)
        {
            sum+=marks2[i];
        }
        double midmark = sum/5.00;
        cout<<"Average mark: "<<midmark<<endl<<"************************"<<endl;
    }
ostream& operator <<(ostream &out,const  StudentAfterSecondSession &student)
{
    out<<"Marks after second session"<<endl<<"************************"<<endl<<"Algebra: "<<student.marks2[0]<<endl<<"Geometry: "<<student.marks2[1]<<endl<<"Programming: "<<student.marks2[2]<<endl<<"Mat.analiz: "<<student.marks2[3]<<endl<<"Math.logic: "<<student.marks2[4]<<endl;
    return out;
}