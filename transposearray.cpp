#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],r,c,i,j;
    cout<<"enter the row and columns"<<endl;
    cin>>r>>c;
    cout<<"enter the array elements"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        cin>>a[i][j];
        }
    }
    cout<<"arrays are"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        cout<<"  "<<a[i][j];
        }
        cout<<endl;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
       b[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
        cout<<"  "<<b[i][j];
        }
        cout<<endl;
    }
    return 0;
}