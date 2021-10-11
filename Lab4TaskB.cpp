#include <iostream>
using namespace std;
int main()
{
  string* AS; 
  string* AS2; 
  int count;
  string s;
  char buf[80];
  cout << "Enter strings:\n";
  count = 0;
  AS = nullptr;
  do
  {
    cout << "=> ";
    cin.getline(buf, 80, '\n'); 
    s = buf;
    if (s != "")
    {
      count++;
      AS2 = new string[count];
      for (int i = 0; i < count - 1; i++)
      {
        AS2[i] = AS[i];
      }
      AS2[count - 1] = s; 
      if (AS != nullptr)
        delete[] AS2;
      AS = AS2;
    }
  } while (s != "");
  cout << "You array: "<<endl;
  if (count > 0)
  {
    for (int i = 0; i < count; i++)
    {
      cout << AS[i] ;
    }
    cout<<endl;
  }
  cout<<"New array: "<<endl;
  int i = 0;
  int k = 0;
  int q = 0;
  int cifra = 0;
  int m = 0;
  for(int i= 0;i<count;i++)
  {
  	 while(AS[i][k] != ' ')
  	{
  		q++;
  		k++;
  	}
  	k=0;
 while(AS[i][k] !=' ')
 {
 	if(AS[i][k]>47 && AS[i][k]<58)
 	{
 		cifra++;
 	}
 	k++;
 }
 if(cifra==q)
 {
 	cout<<AS[i];
 }
 cifra=0;
 q=0;
 k=0;
  }
  int v = 0;
  int t = 0;
  int nocifra = 0;
 for(int y = 0;y<count;y++)
 {
 		 while(AS[y][t] != ' ')
  	{
  		v++;
  		t++;
  	}
  	t=0;
  	 while(AS[y][t] !=' ')
 {
 	if(AS[y][t]<48 || AS[y][t]>57)
 	{
 		nocifra++;
 	}
 	t++;
 }
  if(nocifra==v)
 {
 	cout<<AS[y];
 }
 nocifra=0;
 v=0;
 t=0;
 }
  delete[] AS;
return 0;
}
