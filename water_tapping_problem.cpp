#include<iostream>
#include<vector>
using namespace std;


int rain_water_tapping(int arr[], int size)
{
    vector<int> left;
    vector<int> right;
    int n=size-1;
    int left_array_max=arr[0];
    int right_array_max=arr[n];
    vector<int> capacity;
    int cap=0;
    int sum=0;
    // calculating the max from the left array
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=left_array_max)
        {
            left.push_back(arr[i]);
        }
        else
        {
            left.push_back(left_array_max);
        }
    }
    // calculating the right max element
    for(int i=n;i>=0;i--)
    {
        if(arr[i]>=right_array_max)
        {
            right.push_back(arr[i]);
        }
        else
        {
            right.push_back(right_array_max);
        }
    }
    vector<int> mini;
    for(int i=0;i<size;i++)
    {
        mini.push_back(min(left[i],right[i]));
    }
    
    for(int i=0;i<size;i++)
    {
        cap=mini[i]-arr[i];
        capacity.push_back(cap);
        cap=0;
    }
    for(int i=0;i<size;i++)
    {
        sum=sum+capacity[i];
    }
    
    return sum;
}

int main()
{
    int arr[]={3,0,0,2,0,4};
    int ans=rain_water_tapping(arr,6);
    cout<<ans;
    return 0;
}
