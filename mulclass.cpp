#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    int getrecarea()
    {
        cout<<"enter length and breadth"<<endl;
        cin>>length>>breadth;
    }
     int printlenandbre()
     {
        cout<<length<<breadth<<endl;
     }
};
class circle
{
    public:
    int radii;
    int getcicarea()
    {
        cout<<"enter radii"<<endl;
        cin>>radii;
    }
    int printradii()
    {
        cout<<radii<<endl;
    }
};
class shape: public rectangle, public circle
{
 public:
 int getshapes()
 {
    cout<<"area of rectangle and circle "<<endl;
 }
 int printarea()
 {
    cout<<"area of rectangle is :  "<<length*breadth<<endl;
    cout<<"area of circle is :  "<<3.14*radii*radii<<endl;
 }
};
int main()
{
    shape s;
    s.getrecarea();
    s.getcicarea();
    s.printlenandbre();
    s.printradii();
    s.getshapes();
    s.printarea();
    return 0;
}