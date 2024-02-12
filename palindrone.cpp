#include<iostream>
using namespace std;
int getname(char name[]){
    int count=0;
    for (int i = 0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}


bool checkpalindrone(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<=e){
        if (name[s]!=name[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
    char name[20];
    cout<<"enter name"<<endl;
    cin>>name;
    int length=getname(name);    
    if(checkpalindrone(name,length)){
        cout<<"It is a palindrone"<<endl;
    }
    else{
        cout<<"It is not a palindrone"<<endl;
    }
    return 0;
}