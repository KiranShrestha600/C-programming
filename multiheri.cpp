#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    int setx()
    {
        cout<<"enter x"<<endl;
        cin>>x;
    }
    int printx()
    {
        cout<<x<<endl;
    }
};
class B
{
    public:
    int y;
    int sety()
    {
        cout<<"enter y"<<endl;
        cin>>y;
    }
    int printy()
    {
        cout<<y<<endl;
    }
};
class C : public A, public B
{
 int z;
 public:
 int setz()
 {
    cout<<"enter z"<<endl;
    cin>>z;
 }
 int printmul()
 {
    cout<<x*y*z<<endl;
 }
};
int main()
{
    C cl;
    cl.setx();
    cl.sety();
    cl.setz();
    cl.printx();
    cl.printy();
    cl.printmul();
    return 0;
}

