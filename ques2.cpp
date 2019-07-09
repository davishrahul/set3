#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int numArray[number];
    for(int i=0;i<number;i++)
    {
        cin>>numArray[i];
    }
    int max=numArray[0];
    for(int i=0;i<number;i++)
    {
        if(numArray[i]>max)
        {
            max=numArray[i];
        }
    }
    cout<<max;
    return 0;
}
