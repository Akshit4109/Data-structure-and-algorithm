#include<iostream>
#include<utility>
using namespace std;



void insertion_sort(int arr[],int n)
{
    for(int j=1;j<n;j++)
    {
        int key=arr[j];
        int i=j-1;
        while(i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
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