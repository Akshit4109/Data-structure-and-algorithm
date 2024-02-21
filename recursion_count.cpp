#include<iostream>
using namespace std;

void counting(int n){
    // Base conditon
    if (n==0)
    {
        return ;
    }
    // recursive relation
    counting(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    counting(n);
    return 0;
}