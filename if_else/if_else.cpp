#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int age;
    cin>>age;

    if (age>=18)
    {
        cout<<" you can vote "<< endl;
    }
    else
    {
        cout<<" you can't vote "<< endl;
    }

    return 0;

}