#include<iostream>
#include<utility>
using namespace std;



void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }   
    }
}

int main()
{
    int arr[]={10,9,11,6,15,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}