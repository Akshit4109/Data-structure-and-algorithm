#include<iostream>
using namespace std;


void selection_sort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        int min=i;
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
            
        }
        swap(arr[i],arr[min]);
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
    selection_sort(arr,5);
    printArr(arr,5);
    return 0;
}