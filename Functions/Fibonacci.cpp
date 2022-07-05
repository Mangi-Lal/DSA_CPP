#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    int t1=0;
    int t2=1;
    for (int i=1;i<=n;i++){
        cout<<t1<<"  ";
        int nextterm = t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return ;
    
}

int main()
{
    int n;
    cin>>n;
    fibonacci(n); 
    return 0;
}