#include<iostream>
using namespace std;
int t[102][1002];


int  count_of_subset(int arr[],int sum,int size) 
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


int count_no_of_subset_with_difference(int arr[],int sum,int diff, int size)
{
    int main_sum=(sum+diff)/2; // logic sum(s1)-sum(s2)=difference, sum(s1)+sum(s2)=sum(arr), sum(s1)= (sum(arr)+difference)2;
    int ans= count_of_subset(arr,main_sum,size);
    return ans;
} 

int main()
{
    int arr[]={1,2,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int diff=1;
    int sum=0;
    for(int i =0; i<size;i++)
    {
        sum=sum + arr[i];
    }
    int result=count_no_of_subset_with_difference(arr,sum,diff,size);
    cout<<result;
    return 0;
}