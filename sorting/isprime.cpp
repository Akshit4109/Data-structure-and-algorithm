#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int number)
{
    if(number==0)
    {
        return false;
    }
    if(number==1)
    {
        return true;
    }
    int n= sqrt(number);
    for(int i=2;i<=n;i++)
    {
        if(number%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    if(isprime(number)==true)
    {
        cout<<"the given number is a prime number"<<endl;
    }
    else
    {
        cout<<"the given number is not a prime number"<<endl;
    }
    return 0;
}