#include<iostream>
using namespace std;
int main()
{
    int radius;
    cin>>radius;
    float vol = (4*3.14*radius*radius*radius)/3;
    cout<<"Volume of Sphere is = "<<vol<<endl;
    return 0;
}