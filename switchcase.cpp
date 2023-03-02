#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int choice,add,sub,a,b; 
    float div,mult;
    char again;
    lable: cout<<"enter your  choice menus 1.Addition 2.Subtraction  3.Division  4.multiplication  "<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"enter a and b"<<endl;
        cin>>a>>b;
        add=a+b;
        cout<<"result is "<<add<<endl;
        break;
    case 2:
        cout<<"enter a and b"<<endl;
        cin>>a>>b;
        sub=a-b;
        cout<<"result is "<<sub<<endl;
        break;
    case 3:
         cout<<"enter a and b"<<endl;
        cin>>a>>b;
        div=a/b;
        cout<<"result is "<<div<<endl;
       break;
    case 4:
        cout<<"enter a and b"<<endl;
        cin>>a>>b;
        mult=a*b;
        cout<<"result is "<<mult<<endl;
        break;
    default:
      cout<<"not my choice"<<endl;
      break;
    }
        cout<<"do you want to do any more (Y/N)"<<endl;
        cin>>again;
        if (again=='Y')
        {
            goto lable;
        }
        
    return 0;
}