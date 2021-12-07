#include<iostream>
using namespace std;
int main()
{
    int tab,table;
    cout<<"Enter Number to Print Table :: "<<endl;
    cin>>tab;
    for(int i=1; i<=10; i++)
    {
        table = tab*i;
        cout<<tab<<" X "<<i<<" = "<<table<<endl;
    }
    return 0;
}