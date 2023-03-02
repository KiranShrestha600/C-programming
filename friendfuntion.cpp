#include<iostream>
using namespace std;
class A
{
    private:
    int x;
    protected:
    int y;
    public:
    A()
    {
        x=10;
        y=20;
    }
    friend int print(A &a);
};
  int  print(A &a)
{
    cout<<" private variable "<<a.x<<endl;
    cout<<"protected variable "<<a.y<<endl;
}
int main()
{
 A a1;
 print (a1);
 return 0;
}