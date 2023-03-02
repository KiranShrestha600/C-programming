#include<iostream>
using namespace std;
int fun(int n1, int n2)
{
    int sum;
    sum=n1+n2;
    cout<<"the sum is  "<<sum<<endl;
    return 0;
}
int main()
{
    int n1 , n2;
    cout<<"enter the n1 and n2 "<<endl;
    cin>>n1>>n2;
    fun(n1,n2);
    return 0;
}