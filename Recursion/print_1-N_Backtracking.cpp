#include<iostream>
using namespace std;

void name(int i, int n){
    if(i<1)
        return;
    name(i-1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    name(n,n);
}