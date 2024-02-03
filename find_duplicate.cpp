#include<iostream>
using namespace std;

//every element 1-(n-1) is repeating once but one element is repeating twice, find that element.
int main()
{
    int count=0;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        count=count^arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        count=count^i;
    }
    cout<<endl<<count;
    return 0;
}