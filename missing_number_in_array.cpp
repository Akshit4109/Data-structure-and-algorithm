#include<iostream>
using  namespace std;

int missing_number(int *arr,int n)
{
    int sum1=0;
    int sum2=0;
    for(int i=0;i<=n;i++)
    {
        sum1=sum1+i;
    }
    for(int i=0;i<n;i++)
    {
        sum2=sum2+arr[i];
    }
    int ans = sum1-sum2;
    return ans;
}

int main()
{
    int arr[]={0,1,2,3,4,5,6};
    int n=7;
    int result= missing_number(arr,n);
    cout<<result;
    return 0;
}