#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    int arr[]={100,80,60,70,60,75,85};
    int n=6;
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mini = min(mini,arr[i]);
        maxi = max(maxi,arr[i]-mini);
    }
    cout<<"maximum profit "<<maxi<<endl;
    return 0;
}