/*
Pattern question (04)
A
B C
C D E 
D E F G
*/
// ##################################################################
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
            char ans = 'A'+i+j-2;
            cout<<ans<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}