#include <iostream>
using namespace std;
int main()
{
  int count;
  const int maxsize=300;
  char *AS= new char[maxsize];
  cout << "Enter strings:\n";
  int i = 0;
  char s;
  int count= 0;
  for (int i = 0; s != '.'; i++)
    {
        cin.get(s);
        AS[i] = s;
    }
        for (int i = 0; AS[i] != '.'; i++)
        {
            count++;
        }  
    cout<<"Your string: "<<endl;
  while(AS[i] !='.' )
  {
  cout<<AS[i];
  i++;
  }
  cout<<endl;
  int a=0;
  int q = 0;
  int cifra = 0;
  int f = 0;
  cout<<"New string: "<<endl;
while(f<count) 
{ 
  	while(AS[a]!=' ' && AS[a]!='.')
  	{
  		q++;
  		a++;
  	}
  	a=f;
  	while(AS[a]!=' ')
  	{
  			if(AS[a]>47 && AS[a]<58)
 	{
 		cifra++;
 	}
 	a++;
  	}
  	if(q==cifra)
  	{
  		cout<<" ";
  		for(int w = f;w<q+f;w++)
  		{
  			cout<<AS[w];
  		}  		
  	} 
  	cifra= 0;
  	f=f+q+1;
  	a=f;  	
  	q=0;	
}
int b=0;
int r=0;
int g= 0;
int necifra = 0;
while(g<count) 
{
  	while(AS[b]!=' ' && AS[b]!='.')
  	{
  		r++;
  		b++;
  	}
  	b=g;
  	while(AS[b]!=' ')
  	{
  			if(AS[b]<48 || AS[b]>57)
 	{
 		necifra++;
 	}
 	b++;
  	}
  	if(r==necifra)
  	{
  	cout<<" ";
  		for(int x = g;x<r+g;x++)
  		{
  			cout<<AS[x];
  		}		
  	} 
  	necifra= 0;
  	g=g+r+1;
  	b=g;  	
  	r=0;	
}
delete[] AS;
  return 0;
}
