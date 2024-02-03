#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    
    while (start<=end)
    {
        if (key==arr[mid])
        {
            return mid;
        }
        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        // mid=(start+end)/2;
        mid=start+(end-start)/2;
    }
    
    return -1;
}


int main()
{
    int arr[6]={2,4,56,78,90,98};
    int index = binarysearch(arr,6,98);
    cout<< " element at "<<index<<" position"<<endl;
}


// value of int for max can be 2^31-1, if start and end will have this value then it will get out of the range of int ,
// so instead of (start plus end)/2, we uses this option 