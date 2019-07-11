#include<iostream>
using namespace std;
int main()
{
    int i,a,d,n,add=0;
    cin>>n>>a>>d;
    int numArray[n];
    for(i=0;i<n;i++)
    {
        if(i==0)
    {
        numArray[i]=a;
    }
    else if(i>0 && i<n)
    {
        a=a+d;
        numArray[i]=a;
    }
    }
    for(int j=0;j<n;j++)
    {
        add=add+numArray[j];
    }
    cout<<add;
    
    return 0;
}
