/*
Pattern question (05)
A
B B 
C C C 
D D D D
*/
// ####################################################################
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ans = 'A'+i-1;
            cout<<ans<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}