#include <iostream>
using namespace std;
int main()
{
    int sub_hour,sub_minutes,hour1,hour2,minutes1,minutes2;
    cin>>hour1>>minutes1>>hour2>>minutes2;
    sub_hour=hour1-hour2;
    sub_minutes=minutes1-minutes2;
    if(sub_hour<0||sub_minutes<0)
    {
        sub_hour=-sub_hour;
        sub_minutes=-sub_minutes;    
        cout<<sub_hour<<" "<<sub_minutes;
    }
    else
    {
        cout<<sub_hour<<" "<<sub_minutes;
    }   
    return 0;
}
