#include<iostream>
using namespace std;
int main()
{
    int v,*p;
    p=&v;
    cout<<"enter the number to check"<<endl;
    cin>>v;
    cout<<"the value of v is"<<v<<endl;
    cout<<"the vaule of the address of v"<<p<<endl;
    cout<<"the value of pointer where it is pointed "<<*p<<endl;
    return 0;
}