#include<iostream>
using namespace std;

int getpivot(int arr[],int size){
    int s=0;
    int e= size-1;
    int mid=s+(e-s)/2;
    while (s<e){
        if (arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarysearch(int arr[], int start, int end, int key){
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>=key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s+(e-s)/2;
    }
    return -1;

}

int main(){
    int arr[6]={7,9,10,1,2,3};
    int key=10;
    int pivot=getpivot(arr,6);
    cout<<pivot;
    if(key>=arr[pivot]&& key<=arr[5]){
        cout<<"at index"<<binarysearch(arr,pivot,5,3);
    }
    else{
        cout<<"at index"<<binarysearch(arr,0,pivot-1,3);
    }
    return 0;
}