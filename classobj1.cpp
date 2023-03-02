#include<iostream>
using namespace std;
class oddeve{
    private:
    int n;
    public:
    int getdata();
    int putdata();
};
int oddeve::getdata()
{
    cout<<"enter the number to be checked";
    cin>>n;
}
int oddeve::putdata()
{
    if(n%2==0)
    {
        cout<<"the number is even";
    }
    else{
        cout<<"the number is odd";
    }
}
int main()
{
    oddeve nn;
    nn.getdata();
    nn.putdata();
    return 0;
}
