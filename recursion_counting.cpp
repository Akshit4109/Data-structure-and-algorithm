#include<iostream>
using namespace std;

int counting(int n){
    // Base conditon
    if (n==0)
    {
        return 1;
    }
    // recursive relation
    cout<<n<<endl;
    return counting(n-1);
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int ans=counting(n);
    cout<<ans<<endl;
    return 0;
}