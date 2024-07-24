#include<iostream>
#include<climits>
using namespace std;

int matrix_chain_multiplication(int arr[],int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    int mini = INT_MAX;
    for(int k=i;k<j;k++)
    {
        // to find the cost of the multiplication
        int temp_ans = matrix_chain_multiplication( arr, i, k)  + matrix_chain_multiplication( arr, k+1, j) + (arr[i-1]*arr[k]*arr[j]);
        if(mini>temp_ans)
        {
            mini=temp_ans;
        }
    }
    return mini;
    
}

int main()
{
    int arr[]={40,20,30,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 1;
    int j = n;
    int result = matrix_chain_multiplication(arr,i,j);
    cout<<result;
    return 0;
}