#include<iostream>
using namespace std;

int poweroftwo(int n){
    // Base conditon
    if (n==0)
    {
        return 1;
    }
    // recursive relation
    return 2*poweroftwo(n-1);
}
int main(){
    int n;
    cout<<"enter the power of 2 "<<endl;
    cin>>n;
    int ans=poweroftwo(n);
    cout<<ans<<endl;
    return 0;
}