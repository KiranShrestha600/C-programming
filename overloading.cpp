// WAP in c++ to explain the concept of function overloading
#include <iostream>
using namespace std;
int add(int a, int b);
int add(int  c, int  d);
int add(int x, int y, int z);
int main()
{
    add(10, 20);
    add(10, 20);
    add(10, 20, 40);
    return 0
}
int add(int a, int b)
{
    cout << (a + b) << endl;
}
int main(int c, int d)
{
    cout << (c + d) << endl;
}
int main(int x, int y, int z)
{
    cout << (x + y + z) << endl;
}