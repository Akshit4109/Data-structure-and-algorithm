#include<iostream>
using namespace std;
int t[102][1002];

int  longest_subsequence_subset(int arr[],int sum,int size) // weight arr -> arr[], weight = sum; // function name is common subset
{
    for(int i=0;i<=size;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(t[0][j]==0)
            {
                t[0][j]=0;
            }
            if(t[i][0]==0)
            {
                t[i][0]=1;
            }
        }
    }
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j]; // only this changes (|| -> +) ;
            }
            else 
            {
                t[i][j]= t[i-1][j];
            }
        }
    }
    return t[size][sum];

}

int main()
{
    int arr[]={2,3,5,6,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=10;
    memset(t,0,sizeof(t));
    int result=longest_subsequence_subset(arr,sum,size);
    cout<<result;
    return 0;
}


