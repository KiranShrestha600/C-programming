#include<iostream>
using namespace std;
class base
{
    public:
    int print()
    {
        cout<<"this is base"<<endl;
    }
};
class drive: public base
{
    public:
    int print()
    {
        cout<<"this is derive class"<<endl;
    }
};
int main()
{
    drive d;
    d.print();
    return 0;
}