#include<iostream>
using namespace std;

int main()
{
    int z;
    int x=0;
    int y=1;
    x=y=z=8;
    cout<<x<<endl;

    cout<<"------------------new question--------------"<<endl;
    int a=15;
    int b=7;
    a=a%(a-3);
    cout<<a<<endl;
    b=b%(b-3);
    cout<<b<<endl;
    a=a%1;
    cout<<a<<endl;
    b=b%1;
    cout<<b<<endl;
    cout<<a+b;
    return 0;
}