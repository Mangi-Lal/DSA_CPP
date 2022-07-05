#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n1,n2;
    cin>>n1>>n2;


    for(int num=n1;num<=n2;num++){
        int i;
        for(i=2;i<=num;i++){
            if(num%i==0){
                // Not a prime number 
                break;
            } 
        }
        // all iterations in loop completed
        if(i==num)  
            cout<<num<<endl;
  
    }

    
    return 0;
}