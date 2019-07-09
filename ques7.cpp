#include <iostream>
#include<string>
using namespace std;
int main()
{
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='0' && s[i]<='9') || s[i]=='.')
        {
          count++;
        }
    }
    if(count==s.length())
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
}
