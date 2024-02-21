#include<iostream>
using namespace std;

int factorial(int n){
    // Base conditon
    if (n==0)
    {
        return 1;
    }
    // recursive relation
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}