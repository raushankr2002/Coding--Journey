#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
    time_t timer = time(NULL);
    tm *ptr_time = localtime(&timer);
    cout<<"second = "<<(ptr_time->tm_sec)<<endl;
    cout<<"Minute = "<<(ptr_time->tm_min)<<endl;
    cout<<"Hours = "<<(ptr_time->tm_hour)<<endl;
    cout<<"Day of Year = "<<(ptr_time->tm_yday)<<endl;
    cout<<"Year = "<<(ptr_time->tm_year)+1900<<endl;
    cout<<"weekday "<<(ptr_time->tm_wday)<<endl;

    cout<<"Current Date :: "<<(ptr_time->tm_mday)<<"/"<<(ptr_time->tm_mon)+1<<"/"<<(ptr_time->tm_year)+1900<<endl;
    cout<<"Todays Time = "<<(ptr_time->tm_hour)<<" : "<<(ptr_time->tm_min)<<" : "<<(ptr_time->tm_sec)<<endl; 
    return 0;
}