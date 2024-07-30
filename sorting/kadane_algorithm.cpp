#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

int max_sum_subset(int arr[], int n)
{
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        maxi=max(maxi,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxi;
}

int main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=max_sum_subset(arr,n);
    cout<<result;
    return 0;

}