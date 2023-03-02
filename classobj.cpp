#include<iostream>
using namespace std;
class suraj
{
    private:
    char name[10];
    int age;
    int roll;
public:
int putdata()
{
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<"enter the age"<<endl;
    cin>>age;
    cout<<"enter the roll no"<<endl;
    cin>>roll;
}
int getdata()
{
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"rollno:"<<roll<<endl;
}
};
int main()
{
    suraj aa;
    aa.putdata();
    aa.getdata();
    return 0;
}