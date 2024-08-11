#include<iostream>
using namespace std;

int maxCut(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    return n+maxCut(n-1);
}

int main()
{
    int n,result;
    cout<<"enter number of cuts"<<endl;
    cin>>n;
    result=maxCut(n);
    cout<<result+1;
    return 0;
}