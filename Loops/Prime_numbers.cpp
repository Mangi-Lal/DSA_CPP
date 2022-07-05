#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int i;
    for(i=2;i<=n;i++){
        if(n%i==0){
            cout<<"Not a prime"<<endl; // found a factor of n
            break;
        } 
    }

    // all iterations in loop completed
    if(i==n)  
        cout<<"Number is prime" << endl;

    return 0;
}