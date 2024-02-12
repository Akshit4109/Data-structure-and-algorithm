#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size){
    for (int i = 1; i < size; i++){
        int temp=arr[i];
        int j = i-1;
        for (; j>=0 ; j-- ){
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    
}
void printArr(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[7]={10,1,7,4,8,2,11};
    insertion_sort(arr,7);
    printArr(arr,7);
    return 0;
}