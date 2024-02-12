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
// first method
void reverse_char1(char name[], int size){
    for (int i = size; i>=0; i--)
    {
        cout<<name[i];
    }
    
}
// second method
void reverse_char2(char name[], int size){
    int start=0;
    int end=size-1;
    while (start<end)
    {
        swap(name[start++], name[end--]);
    }
    
    
    
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
    cout<<"your name is ";
    cout<<name<<endl;
    string n=name;
    int length=getname(name);
    reverse_char1(name,length);
    cout<<endl;
    reverse_char2(name,length);
    cout<<n<<endl;

    return 0;
}