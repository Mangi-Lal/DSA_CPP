#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;

    if (a%2 == 0){
        cout<<"The number is even "<<endl;
    }
    else {
        cout<< "The number is odd "<<endl;

    }
    return 0;
}