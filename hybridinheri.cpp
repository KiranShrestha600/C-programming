#include<iostream>
using namespace std;
class vechicle
{
    public:
    vechicle()
    {
        cout<<"This is vechicle"<<endl;
    }
};
class car: public vechicle
{
    public:
    car()
    {
        cout<<"the is car"<<endl;
    }
};
class Racing
{
    public:
    Racing()
    {
        cout<<"this is racing car"<<endl;
    }
};
class ferrari: public car, public Racing
{
    public:
    ferrari()
    {
        cout<<"this is ferrari"<<endl;
    }
};
int main()
{
    ferrari f;
    return 0;
}