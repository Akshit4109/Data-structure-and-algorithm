#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    cout<<"enter the value of n"<<endl;
    int n;
    cin>>n;
    int fib[n];
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    // fib[0]=0;
    // fib[1]=1;
    // for(int i=2;i<n;i++)
    // {
    //     fib[i]=fib[i-1]+fib[i-2];
    //     cout<<fib[i]<<endl;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<fib[i]<<endl;
    // }
    return 0;
}