#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<n<<" * "<<i<< " = " << n*i <<endl;

    }
    return 0;
}