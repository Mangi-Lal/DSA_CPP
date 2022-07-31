/*
Pattern question (10)
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1 
  */
// #################################################################
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
        // Printing numeric first triangle
        int col = 1;
        while (col<=row)
        {
            cout<< col <<" ";
            col++;
        }
        // Printing numeric second triangle
        int val = row-1;
        int k= 1;
        while (k<=(row-1))
        {
            cout<<val<<" ";
            val--;
            k++;
        }
        cout<<"\n";
        row++;
    }
}