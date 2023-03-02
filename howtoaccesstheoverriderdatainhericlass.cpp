#include<iostream>
using namespace std;
class base
{
    public:
    int print()
    {
     cout<<"this is base class"<<endl;
    }
};
class drive : public base
{
    public:
    int print()
    {
        cout<<"this is derive class"<<endl;
    }
};
int main()
{
    drive d,dl;
    d.print();
    dl.base::print();
    return 0;
}