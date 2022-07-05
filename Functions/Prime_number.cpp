#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Prime numbers :";
    for(int num=a;num<=b;num++){
        if(isPrime(num)){
            cout<<num<<" ";
        }
    }

    return 0;
}