#include<iostream>
using namespace std;

int peakmountain(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
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
    int arr[4]={1,5,9,1};
    int ans1=peakmountain(arr,4);
    cout<<ans1;
    return 0;
}