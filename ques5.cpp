#include <iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int a[number];
    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }
    int temp;
    for(int i=0;i<number;i++)
    {
       for(int j=i+1;j<number;j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }     
    }
    number=(number+1)/2-1;
    cout<<a[number];
  return 0;
}
