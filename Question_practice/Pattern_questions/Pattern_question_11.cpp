/*
Pattern question (11)
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
// ###################################################################
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        // Printing first triangle  
        int j = 1;
        while (j<=(n-i+1))
        {
            cout << j << " ";
            j++;
        }
        // Printing star's
        int k = 1;
        while (k<=2*(i-1))
        {
            cout << "* ";
            k++;
        }
        // printing second triangle
        int l = 1;
        int val = n-i+1;
        while (l<=(n-i+1))
        {
            cout << val << " ";
            val--;
            l++;
        }
        cout << "\n";
        i++;
    }
    
}