#include<iostream>
using namespace std;

int func(int n){
    int num=n;
    int &ans=num;
    return ans;
}
int main(){
    int i=5;
    int &j=i;//this is reference variable with same memory and different name
    int ans=func(i);
    cout<<ans<<endl;
    // cout<<j<<endl;
    return 0;
}