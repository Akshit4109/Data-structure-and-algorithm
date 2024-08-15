#include<iostream>
using namespace std;

int main()
{
    int x=7;
    int *y,**z;
    y=&x;
    z=&y;
    **z=7;
    cout<<x<<" "<<*y<<" "<<**z<<endl;
    return 0;
}