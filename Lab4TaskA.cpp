#include <iostream>
using namespace std;
int MyStrcmp(const char*str1,const char*str2)
{
	int s=0;
	while(*str1!=0 || *str2!=0)
	{
		if(*str1-*str2<0)
		{
			s=-1;
			break;
		}
		if(*str1-*str2>0)
		{
			s=1;
			break;
		}
		*str1++;
		*str2++;
}
return s;
}
int main()
{
   char *str1 = "abcd";
 char *str2 = "abce";
   cout<<MyStrcmp(str1,str2)<<endl;
return 0;
}
