#include <iostream>
#include <string>
#include "calc.h"
using namespace std;
int main()
{
    string task;
 cout<<"Enter a task: ";
    cin>>task;
    cout<<"Result is: "<<CalculateExpression(task);
    return 0;
}