//
#include<iostream>
using namespace std;
class student
{
    public:
    char name [20];
    int age;
    int getdata()
    {
        cout<<"enter name :"<<endl;
        cin>>name;
        cout<<"enter age :"<<endl;
        cin>>age;
    }
};
class rollno: public student
{
 private:
 int roll;
 public:
 int getmember()
 {
    cout<<"enter rollno "<<endl;
    cin>>roll;
 }
 int print()
 {
    cout<<"Name :  "<<name<<endl;
    cout<<"Age :  "<<age<<endl;
    cout<<"rollno :  "<<roll<<endl;
 }
};
int main()
{
     rollno s;
    s.getdata();
    s.getmember();
    s.print();
    return 0;
}

