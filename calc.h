#ifndef LAB8_CALC_H
#define LAB8_CALC_H
#include "stack.h"
#include "cmath"
using namespace std;
bool IsOperation(char PartOfExpression);
int Priority(char PartOfExpression);
double Calculate(double FirstValue, double SecondValue, char Operation);
double CalculateExpression(string Expression);
int CountOpenedBrackets(string Expression);
int CountClosedBrackets(string Expression);
string DeleteSpaces(string Expression);
void Check(string &Expression);
#endif
