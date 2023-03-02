#include<iostream>
using namespace std;
class studentmarks
{
    public:
    int rollno;
    double marks1;
    double marks2;
    int getdatamember()
    {
        cout<<"enter you roll"<<endl;
        cin>>rollno;
        cout<<"enter marks1"<<endl;
        cin>>marks1;
        cout<<"enter marks2"<<endl;
        cin>>marks2;
    }
};
class cocuricullar: public studentmarks
{
    public:
    double marks3,marks4;
    int getcombinedmarks()
    {
        cout<<"enter the cocurricullar marks"<<endl;
        cin>>marks3;
        marks4=marks1+marks2+marks3;
    }
};
class all:/* public studentmarks,*/ public cocuricullar
{
    public:
    double totalmarks , averagemarks;
    int getaveragee()
    {
        cout<<"you rollno is : "<<rollno<<endl;
     cout<<"your total marks is :"<<marks4<<endl;
     cout<<"your average marks is :"<<marks4/3<<endl;
    }
};
int main()
{
    all a;
    a.getdatamember();
    a.getcombinedmarks();
    a.getaveragee();
    return 0;
}