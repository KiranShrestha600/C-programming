/*Simple program for multiple inheritance with the access specfies protected*/
#include<iostream>
using namespace std;
class student
{
private:
    int rno;
    protected: 
    int m0, m1;
public:
    int get()
    {
        cout<<"enter rollno"<<endl;
        cin>>rno;
        cout<<"enter marks as m0 and m1"<<endl;
        cin>>m0>>m1;
    }
};
class sports
{
    private:
    protected:
    int sm;
    public:
    int getsm()
    {
        cout<<"enter sports marks"<<endl;
        cin>>sm;
    }
};
class statement: public student, public sports
{
    private:
    int total;
    protected:
    int avg;
    public:
    int display()
    {
        total=m0+m1+sm;
        avg=total/3;
        cout<<"total "<<total<<endl;
        cout<<"avg  "<<avg<<endl;
    }
};
int main()
{
    statement s;
    s.get();
    s.getsm();
    s.display();
    return 0;
}