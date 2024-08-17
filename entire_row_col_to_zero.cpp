#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void makeaArrToZero(int arr[][3], int n , int m)
{
    for(int k = 0 ; k < 3 ; k++)
    {
        arr[n][k]=0;
        arr[k][m]=0;
    }
    // for(int k = 0 ; k < 3 ; k++)
    // {
    //     arr[k][m]=0;
    // }
    return;
}

int main()
{
    int arr[][3]={{1,1,1},{1,0,0},{1,1,1}};
    int arr1[][3]={{1,1,1},{1,0,1},{1,1,1}};
    int n=3,m=3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                makeaArrToZero(arr1,i,j);
            }
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}