/*
Pattern question (08)
* * * * *
  * * * *
    * * *
      * *
        *
*/
// #####################################################################
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        // Printing space's
        int space = row-1;
        while (space)
        {
            cout<<"  ";
            space = space - 1;
        }
        // Printing star's
        int col = 1;
        while (col<=(n-row+1))
        {
            cout<< "* ";
            col++;
        }
        cout<<"\n";
        row++;
    }
}