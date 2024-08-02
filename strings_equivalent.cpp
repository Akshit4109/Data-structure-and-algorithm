#include<iostream>
using namespace std;

bool stringEquivalent(string *arr1, string *arr2,int s1,int s2)
{
    string first;
    string second;
    for(int i=0;i<s1;i++)
    {
        first.append(arr1[i]);
    }
    for(int i=0;i<s1;i++)
    {
        second.append(arr2[i]);
    }
    if(first==second)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


int main()
{
    string arr1[]={"ab", "a"};
    string arr2[]={"aa", "ba"};
    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int s2=sizeof(arr2)/sizeof(arr2[0]);
    if(stringEquivalent(arr1,arr2,s1,s2))
    {
        cout<<"both are equal"<<endl;
    }
    else
    {
        cout<<"both are not equal"<<endl;

    }
}