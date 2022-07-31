/*
Pattern question (07)
         *
       * *
     * * *
   * * * *
 * * * * *
*/
// #############################################################
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        int space = n-row;
        // Printing space's
        while (space)
        {
            cout<<"  ";
            space = space - 1;
        }
        // Printing star's
        int col = 1;
        while (col<=row)
        {
            cout<< "* ";
            col++;
        }
        cout<<"\n";
        row++;
    }
}