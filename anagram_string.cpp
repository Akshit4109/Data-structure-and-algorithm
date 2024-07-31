#include<iostream>
using namespace std;

bool isanagram(int *arr,string name1 , string name2, int length)
{

    if(name1.length()!=name2.length())
    {
        return false;
    }
    for(int i = 0;i<name1.length();i++)
    {
        arr[name1[i]-'a']++;
        arr[name2[i]-'a']--;
    }
    for(int i = 0;i<length;i++)
    {
        if(arr[i]!=0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int length =26;
    int *arr = new int[length];
    string name1="akshit";
    string name2="kashit";
    if(isanagram(arr,name1,name2,length))
    {
        cout<<"string B is anagram of string A"<<endl;
    }
    else
    {
        cout<<"string B is not anagram of string A"<<endl;
    }

    return 0;
}