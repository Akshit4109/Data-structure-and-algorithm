#include<iostream>
using namespace std;
bool t[102][1002];

bool longest_subsequence_subset(int arr[],int sum,int size) // weight arr -> arr[], weight = sum;
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<sum;j++)
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

    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=((t[i-1][j-arr[i-1]]) || t[i-1][j]);
            }
            else if(arr[i-1]>j)
            {
                t[i][j]= t[i-1][j];
            }
        }
    }
    return t[size][sum];

}
}

int main()
{
    int arr[]={2,3,7,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=11;
    memset(t,false,sizeof(arr));
    bool result=longest_subsequence_subset(arr,size,sum);
    cout<<result;
    return 0;
}