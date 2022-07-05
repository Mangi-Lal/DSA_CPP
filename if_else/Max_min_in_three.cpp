#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    if (n1>n2){
        if (n1>n3){
            cout<<" Maximum between three is :"<<n1<<endl;
        }
        else {
            cout<<" Maximum between three is :"<<n3<<endl;
        }
    }
    else {
        if(n2>n3){
            cout<<" Maximum between three is :"<<n2<<endl;
        }
        else{
            cout<<" Maximum between three is :"<<n3<<endl;
        }
    }

        return 0;

    
}