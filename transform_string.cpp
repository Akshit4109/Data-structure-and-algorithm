#include<iostream>
#include<string>
using namespace std;

string transform_string(string s)
{
    string ans;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            ans.append(1,'b'); // append b one time only
        }
        else if(s[i]=='b')
        {
            ans.append(1,'a'); // append a one time only
        }
        else
        {
            ans.append(1,s[i]); 
        }
    }
    return ans;
}

int main()
{
    string a = "abaabbcc";
    string ans = transform_string(a);
    cout<<ans;
    return 0;
}