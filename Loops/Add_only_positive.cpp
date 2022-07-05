#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int sum = 0;
    int number;
    cin>>number;

    while(number>0)
    {
        sum += number;
        number=number/10;
    }
    cout<<"Sum of positive numbers is :"<<sum<< endl;

    return 0;
}