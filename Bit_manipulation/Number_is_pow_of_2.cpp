#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n == 0 && (n & n-1) == 0){
        cout << "number is power of two";
    }
    else
        cout << "Number is not a power of two";

    return 0;
}