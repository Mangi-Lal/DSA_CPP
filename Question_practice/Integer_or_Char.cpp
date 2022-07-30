#include<iostream>
using namespace std;

int main()
{
    char value;
    cin>>value;

    if(value>'A'&&value<'Z'){
        cout<<"Value is a Uppercase Character"<<"\n";
    }
    else if (value>'a'&&value<'z')
    {
        cout<<"Value is a lowercase Character"<<"\n";
    }
    else
        cout<<"Value is an Integer";
    
    return 0;
}