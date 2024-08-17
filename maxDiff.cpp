#include<iostream>
#include<cmath>
#include<algorithm>
#include<climits>

using namespace std;

int main()
{
    int arr[]={1,1,6,9};
    int maxi=INT_MIN;
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        int m = arr[i+1]-arr[i];
        maxi = max(maxi,m);
    }
    cout<<maxi<<endl;
    return 0;
}