#include<iostream>
using namespace std;

int lengthoflastword(string s,int l)
{
    int length=0;
    for(int i=l-1;i>=0;i--)
    {
        if(s[i]== ' ')
        {
            return length;
        }
        length++;
    }
    return length;
}

int main()
{
    string s = "fly me to the moons";
    int l=s.size();
    int result=lengthoflastword(s,l);
    cout<<result;
    return 0;
}