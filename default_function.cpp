#include<iostream>
using namespace std;
//  always default value must be at rightmost place
void print(int arr[], int n, int start=0){ // default value of start is 0, if not passed in function call then it will start from 0 otherwise form given value will be assigned to start
    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[6]={1,4,7,9,12,56};
    print(arr,6);
    return 0;
}