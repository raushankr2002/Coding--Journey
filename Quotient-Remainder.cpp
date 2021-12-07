#include<iostream>
using namespace std;
int main()
{
    int devidend,rem,quot,devisor;
    cout<<"Enter Devidend = "<<endl;
    cin>>devidend;
    cout<<"Enter Devisor = "<<endl;
    cin>>devisor;
    quot = devidend/devisor;
    cout<<"Quotient = "<<quot<<endl;
    rem = devidend % devisor;
    cout<<"Remainder = "<<rem<<endl;

    return 0;
}