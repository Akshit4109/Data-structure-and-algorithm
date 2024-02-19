#include<iostream>
using namespace std;
// no extra memory usage and no function call overhead
// functon code length should be one or in some case it should be less than 3
inline int getmax(int a,int b){
    return (a>b)?a:b; 
}

int main(){
    int a=1,b=2;
    int ans=0;
    ans=getmax(a,b); // here this function will get replaced by the body of this function  because this is a inline function 
    cout<<ans<<endl;

    a=a+3;
    b=b+2;
    ans=getmax(a,b);
    cout<<ans<<endl;
}