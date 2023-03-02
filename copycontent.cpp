//WAP usong C++ to copy the contents of wall 1 to wall 2
#include<iostream>
using namespace std;
class sample
{
    public:
    int add(int a, int b)
    {
        a=10;
        b=20;
    }
     int add(float c,float d)
    {
        c=10.4;
        d=5.6;
    }
     int add(float x,float y)
    {
        x=30;
        y=20;
        
    }
    int show(int a, int b, int x, int y, int z, int c, int d)
    {
        cout<<(a+b)<<endl;
        cout<<(c+d)<<endl;
        cout<<(x+y)<<endl;
    }
     
};
int main()
{
    sample A;
    A.add(10,20);
    A.add(10.4,5.6);
    A.add(30+20+12.3);
    A.show();
    return 0;
}
