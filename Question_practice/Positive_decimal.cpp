#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    #ifndef  ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    while (n>0)
    {
        int lastdigit = n%10;
        cout << lastdigit << "\t";
        n/=10;
    }

    return 0;
}