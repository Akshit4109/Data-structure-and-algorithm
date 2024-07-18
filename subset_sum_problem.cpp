#include<iostream>
using namespace std;
bool t[102][1002];

bool longest_subsequence_subset(int arr[],int sum,int size) // weight arr -> arr[], weight = sum;
{
    if(size==0)
    {
        return false;
    }
    if(sum==0)
    {
        return true;
    }

    if(arr[size-1]<=sum)
    {
        return longest_subsequence_subset(arr,sum-arr[size-1],size-1) || longest_subsequence_subset(arr,sum,size-1) ;
    }
    else if(arr[size-1]>sum)
    {
        return longest_subsequence_subset(arr,sum,size-1) ;
    }

}


int main()
{
    int arr[]={2,3,7,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=121;
    memset(t,false,sizeof(arr));
    bool result=longest_subsequence_subset(arr,sum,size);
    cout<<result;
    return 0;
}