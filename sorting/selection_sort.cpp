#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;



void insertion_sort(int arr[],int n)
{
    int index=0;
    for(int i=0;i<n-1;i++)
    {
        int mini=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<mini)
            {
                mini=arr[j];
                index=j;
            }
        }  
        swap(arr[i],arr[index]);

    }
}

int main()
{
    int arr[]={10,9,11,6,15,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}