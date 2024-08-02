#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;

void rearrange(int *arr,int n)
{
    int len1=n/2;
    vector<int> positive;
    vector<int> negative;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            positive.push_back(arr[i]);
        }
        else
        {
            negative.push_back(arr[i]);
        }
    }
    int index=0;
    for(int i=0;i<len1;i++)
    {
        arr[index++]=positive[i];
        arr[index++]=negative[i];
    }
}

int main()
{
    int arr[]={1,2,-3,2,-4462,-6,576,8,-68,-3,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}