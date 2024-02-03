#include<iostream>
using namespace std;

void takeElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"enter element"<<endl;
        cin>>arr[i];
    }
    
}
void printElement(int arr[], int size)
{
    cout<<"elements of array are"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int minElement(int arr[], int size)
{
    int min=arr[0];;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    return min;
    
}
int maxElement(int arr[], int size)
{
    int max=arr[0];;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    return max;
    
}

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    takeElement(arr,n);
    printElement(arr , n);
    //cout<<endl<<"smallest number in an array is "<<minElement(arr,n)<<endl;
    //cout<<endl<<"largest number in an array is "<<maxElement(arr,n)<<endl;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    maxi=max(maxi,arr[0]);
    maxi=min(maxi,arr[0]);
}