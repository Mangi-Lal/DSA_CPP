#include<iostream>
using namespace std;

int main()
{
    int sum,sub,mul;
    float div,rem;

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int num1;
    // cout<<"Enter the first number :"<<endl;
    cin>>num1;

    int num2;
    // cout<<"Enter the second number :"<<endl;
    cin>>num2;

    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;
    rem = num1%num2;

    cout<<"Sum of two numbers :"<<sum<<endl;
    cout<<"subtraction of two numbers :"<<sub<<endl;
    cout<<"multiplication of two numbers :"<<mul<<endl;
    cout<<"division of two numbers :"<<div<<endl;
    cout<<"emainder of two numbers :"<<rem<<endl;

    return 0;
}