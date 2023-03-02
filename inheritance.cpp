#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    int getx()
    {
        cout<<"enter x"<<endl;
        cin>>x;
    }
};
class B: public A
{
    private:
    int y;
    public:
    int gety()
    {
        cout<<"enter y"<<endl;
        cin>>y;
    }
   int print()
   {
    cout<<"x*y   "<<x*y<<endl;
   }
};
int main()
{
    B b;
    b.getx();
    b.gety();
    b.print();
    return 0;
}