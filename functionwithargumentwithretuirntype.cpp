#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int n1 , n2 ;
    cout<<"enter th n1 and n2 "<<endl;
    cin>>n1>>n2;
    cout<<"the sum is "<<sum(n1,n2)<<endl;
    return 0;
}