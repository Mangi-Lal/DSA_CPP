#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main()
{
    int num;
    cin>>num;
    cout<<"Sum of numbers is : "<<sum(num) ;

    return 0;
}