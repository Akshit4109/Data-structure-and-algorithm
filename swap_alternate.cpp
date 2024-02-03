#include<iostream>
using namespace std;


void print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}

void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i=i+2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int arr1[5]={1,2,3,4,5};
    //swapalternate(arr,6);
    //print(arr,6);
    swapalternate(arr1,5);
    print(arr1,5);
    return 0;
}