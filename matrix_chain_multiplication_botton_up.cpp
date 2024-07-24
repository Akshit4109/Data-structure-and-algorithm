#include<iostream>
#include<climits>
using namespace std;
int static t[1001][1001];

int matrix_chain_multiplication(int arr[],int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    if(t[i][j]!=-1)
    {
        return t[i][j];
    }
    int mini = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int temp_ans = matrix_chain_multiplication( arr, i, k)  + matrix_chain_multiplication( arr, k+1, j) + (arr[i-1]*arr[k]*arr[j]);
        if(mini>temp_ans)
        {
            mini=temp_ans;
        }
    }
    return t[i][j]=mini;
    
}

int main()
{
    int arr[]={40,20,30,10,30};
    memset(t,-1,sizeof(t));
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 1;
    int j = n;
    int result = matrix_chain_multiplication(arr,i,j);
    cout<<result;
    return 0;
}