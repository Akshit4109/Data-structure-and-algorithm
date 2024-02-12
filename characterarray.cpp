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
int main(){
    char name[20];
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"your name is ";
    cout<<name<<endl;
    int length=getname(name);
    cout<<length<<endl;
    return 0;
}