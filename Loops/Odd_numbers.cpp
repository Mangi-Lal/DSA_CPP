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

    for(int i=0;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<"Odd numeber :"<<i<<endl;
    }

    return 0;
}