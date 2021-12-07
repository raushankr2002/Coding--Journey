#include<iostream>
using namespace std;
int main()
{
    //WITH USING 3rd VARIABLE//
    /*
    int num1,num2,temp;
    cout<<"Enter Num1 = "<< endl;
    cin>>num1;
    cout<<"Enter Num2 "<< endl;
    cin>>num2;
    temp = num2 ;
    num2 = num1;
    num1 = temp ;
    cout<<"Num1 = "<<num1<< endl;
    cout<<"Num2 = "<<num2<< endl; */

    //WITHOUT USING 3rd VARIABLE//
    int num1,num2;
    cout<<"Enter Num1 = "<< endl;
    cin>>num1;
    cout<<"Enter Num2 "<< endl;
    cin>>num2;
    num1 = num1 + num2; //10+20=30, num1 = 30
    num2 = num1 - num2; // 30-20=10, num2 = 10
    num1 = num1 - num2; //30-10=20, num1 = 20

    cout<<"Num1 = "<<num1<<endl;
    cout<<"Num2 = "<<num2<<endl;
    return 0;
}