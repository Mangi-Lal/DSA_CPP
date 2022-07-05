#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    float a,b;
    cin>>a>>b;

    char op;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"Addition of two numbers :"<<a+b<<endl;
        break;
    case '-':
        cout<<"Subtraction of two numbers :"<<a-b<<endl;
        break;
    case '*':
        cout<<"Multiplication of two numbers :"<<a*b<<endl;
        break;
    case '/':
        cout<<"Division of two numbers :"<<a/b<<endl;
        break;
    
    default:
        cout<<" ___  "<<endl;
        cout<<"('_') Please use correct operator.. "<<endl;
        break;
    }

    return 0;
}