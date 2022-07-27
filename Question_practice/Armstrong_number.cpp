#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int original = n;
    int sum = 0;

    while(n>0){
        int lastdigit = n%10;
        sum+=pow(lastdigit,3);
        n/=10;
    }

    if(sum == original){
        cout << "Armstrong Number";
    }
    else{
        cout << "Not an Armstrong Number";
    }

    return 0;
}