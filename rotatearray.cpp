#include<iostream>
#include<cmath>
#include<algorithm>
#include<climits>
#include<utility>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the value of K"<<endl;
    int k;
    cin>>k;
    while(k!=0)
    {
        int last=arr[n-1];
        for(int i=n;i!=0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
        k--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}