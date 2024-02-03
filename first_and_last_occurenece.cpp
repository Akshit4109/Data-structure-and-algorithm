#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans1=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans1=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans1;
}

int secondoccurence(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans2=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans2=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans2;
}

int main(){
    int arr[6]={1,2,3,3,3,5};
    int ans1=firstoccurence(arr,6,3);
    int ans2=secondoccurence(arr,6,3);
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}