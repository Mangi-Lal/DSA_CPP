#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    int sum = 0;
    cin>>n;

    for(int counter = 1;counter<=n;counter++)
    {
        sum += counter;
    }
    cout<<" Sum of Natural numbers is :"<<sum<<endl;
    
    return 0;

}