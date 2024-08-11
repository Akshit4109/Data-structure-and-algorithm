#include<iostream>
using namespace std;

int InversionPair(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
        
            if(arr[i]>arr[j])
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[]={1,20,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=InversionPair(arr,n);
    cout<<result;
    return 0;
}