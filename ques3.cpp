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
    int min=numArray[0];
    for(int i=0;i<number;i++)
    {
        if(min>numArray[i])
        {
            min=numArray[i];
        }
    }
    cout<<min;
    return 0;
}
