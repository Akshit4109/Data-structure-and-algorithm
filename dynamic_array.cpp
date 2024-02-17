#include<iostream>
using namespace std;

int getSum(int * ptr,int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        
        sum=sum+ptr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int * ptr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ptr[i];

    }
    int ans=getSum(ptr,n);
    cout<<"ans is "<< ans<<endl;
    return 0;
}