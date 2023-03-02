#include<iostream>
using namespace std;
template<class T>
class calculator
{
    T num1,num2;
    public:
    calculator (T h1, T h2)
    {
        num1=h1;
        num2=h2;
    }
    int display()
    {
        cout<<"numbers"<<num1<<num2;
        cout<<num1<<"+"<<num2<<"="<<add()<<endl;
    }
    T add()
    {
        return (num1+num2);
    }
    T subs()
    {
        return (num1-num2);
    }
    T mul()
    {
        return(num1*num2);
    }
    T div()
    {
        return (num1/num2);
    }
};
int main()
{
    calculator<int>a (2,1);
    calculator<float>b(2.4,3.2);
    cout<<"result for int "<<endl;
    a.display();
    cout<<"result for float"<<endl;
    b.display();
    return 0;
}