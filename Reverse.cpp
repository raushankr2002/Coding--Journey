#include<iostream>
using namespace std;
int main()
{
    int num,rem,rev=0;
    cout<<"Enter Number = "<<endl;
    cin>>num;
    while(num>0){
        rem = num % 10;
        rev = rev*10+rem;
        num = num/10;
    }
    cout<<"Reverse = "<<rev<<endl;
    return 0;
}
