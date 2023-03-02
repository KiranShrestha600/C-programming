#include<iostream>
using namespace std;
class gp
{
    protected:
    int gpd;
    public:
    int readgp()
    {
        cout<<"enter gpd"<<endl;
        cin>>gpd;
    }
};
class p1: virtual public gp 
{
   protected:
   int p1data;
   int readp1()
   {
    cout<<"enter p1data"<<endl;
    cin>>p1data;
   }
};
class p2: virtual public gp
{
    protected:
    int p2data;
    public:
    int readp2()
    {
        cout<<"enter p2data"<<endl;
        cin>>p2data;
    }
};
class child: public p1 , public p2
{
    int sum;
    public:
    int add()
    {
        sum=gpd+p1data+p2data;
    }
    int display()
    {
        cout<<"sum is  "<<sum<<endl;
    }
};
int main()
{
    child c;
    c.readgp();
    c.readp2();
    c.add();
    c.display();
    return 0;
}