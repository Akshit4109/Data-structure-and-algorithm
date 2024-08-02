#include<iostream>
using namespace std;


int main()
{
    cout<<"enter the year"<<endl;
    int n;
    cin>>n;
    if(n%400==0 || (n%100!=0 && n%4==0))
    {
        cout<<"leap year"<<endl;
    }
    else
    {
        cout<<"not a leap year"<<endl;
    }

    return 0;
}