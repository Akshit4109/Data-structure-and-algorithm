#include<iostream>
using namespace std;


void bubble_sort(int arr[],int size){
    for (int j = 0; j < size-1 ; j++)
    {
        for (int i = 0; i < size-1-j; i++)/*we did n-1-j because in every round the largest element will go at the end so no need to compare*/
        {
            if (arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
    
    
}

void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[5]={10,29,83,14,5};
    bubble_sort(arr,5);
    printArr(arr,5);
    return 0;
}