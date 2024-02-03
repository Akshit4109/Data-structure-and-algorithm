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


int main(){
    int arr[6]={3,6,4,2,6,1};
    cout<<" pivot element is at index "<<getpivot(arr,6);

}