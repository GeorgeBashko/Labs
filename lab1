#include <iostream>
#include<iomanip>
#include<conio.h>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
	double x,rez,promrez,b;
 double k,ed;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter k(k>0): ";
	cin>>k;
	while(k<=0)
	{
		cout<<"Invalid k, please try again"<<endl;
		cout<<"Enter k(k>0): ";
		cin>>k;
	}
	b= pow(10,-k);
	int n =1;
	promrez=1;
	while(1==1)
{
		rez = rez + promrez;
			promrez = promrez*(-1)*x/n;
			n++;
if(abs(promrez)<b)
	{
		double znach = exp(-x);
		cout<<"Function value e^(-x): "<<fixed<<setprecision(k)<<znach<<endl;
		cout<<"The meaning of the function e ^ (- x) when using the Taylor series: "<<fixed<<setprecision(k)<<rez<<endl;
	double razn = abs(rez-znach);
		cout<<"The value of the function e ^ (- x) differs from the value of the function when using the Taylor series by: "<<fixed<<setprecision(k)<<razn<<endl;
		exit(0);
	}		
};
return 0;
