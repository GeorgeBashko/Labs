#include <iostream>
#include<iomanip>
#include<vector>
#include<cstdlib>
using namespace std;
int GetMatrixElement(int i,int j,vector<vector<int>>& matrix)
{
    if((i+j)%2!=0)
    {
      return 1;
    }
    else
    {
        return matrix[i][j];
    }
}
void RandMatrix(int size,vector<vector<int>>& matrix)
{
    int max;
    cout<<"Enter a max matrix element: ";
    cin>>max;
    cout<<endl;
    cout<<"Your matrix"<<endl;
    for(int i = 0; i <size; i++)
    {
      cout<<"|";
        for(int j = 0; j <size; j++)
        {
            matrix[i][j]=rand()%max;
            cout<<setw(6)<<GetMatrixElement(i,j,matrix)<<"  ";
        }
        cout<<"|";
        cout<<endl;
    }
}
void PrintMatrix(int size,vector<vector<int>>& matrix)
{
    int q=1;
    for(int i =0;i<size;i++)
    {
        for(int j =0;j<size;j++)
        {
            if((i+j)%2!=0)
            {
                matrix[i][j]=1;
                q++;
            }
            else
            {
                cout<<endl;
                cout<<"Enter a matrix element: ";
                cin>>matrix[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Your matrix"<<endl;
    for(int k = 0;k<size;k++)
    {
        cout<<"|";
        for(int p = 0;p<size;p++)
        {
            cout<<setw(6)<<GetMatrixElement(k,p,matrix)<<"  ";
        }
        cout<<"|"<<endl;
    }
}
void FirstTask(int size,vector<vector<int>>& matrix)
{
    int r = 0;
    int sum = 0;
    for(int i =0;i<size;i++)
    {
        for(int j =0;j<size;j++)
        {
            if(matrix[i][j]==0)
            {
                r++;
            }
        }
        if(r==0)
        {
            for(int x=0;x<size;x++)
            {
                sum+=matrix[i][x];
            }
            cout<<"Sum of "<<(i+1)<<" row: "<<sum<<endl;
            sum=0;
        }
        r=0;
    }
}
void SecondTask(int size,vector<vector<int>>& matrix)
{
    int rez=1;
    int rez1= 0;
    for(int b = 1;b<(size-1);b++)
    {
        for(int u = b,y = 0;u<size;u++,y++)
        {
            rez*=matrix[y][u];
        }
        if(rez>rez1)
            swap(rez,rez1);
        rez=1;
    }
    int rez2=1;
    int rez3=0;
    for(int b = 1;b<(size-1);b++)
    {
        for(int v =0 ,c= b;c<size;c++,v++)
        {
            rez2*=matrix[c][v];
        }
        if(rez2>rez3)
            swap(rez2,rez3);
        rez2=1;
    }
    if(rez3>rez)
        cout<<"The max product of the elements of diagonals parallel to the main: "<<rez3;
    else
        cout<<"The max product of the elements of diagonals parallel to the main: "<<rez;
}
int main()
{
    char ch;
    int size;
    cout<<"Enter a size of matrix(<11): ";
    cin>>size;
    while(size>10 || size<=0)
    {
        cout<<"Invalid size,try again: ";
        cin>>size;
    }
    cout<<"Enter a type of mateix filling(r-random,c-from keyboard): ";
    cin>>ch;
    while(ch!='r' && ch!='c')
    {
        cout<<"Invalid symbol,try again: ";
        cin>>ch;
    }
    vector< vector <int> >matrix(size,vector <int> (size));
    if(ch=='r')
    {
        RandMatrix(size,matrix);
    }
    else
    {
        PrintMatrix(size,matrix);
    }
    FirstTask(size,matrix);
    SecondTask(size,matrix);
    return 0;
}
