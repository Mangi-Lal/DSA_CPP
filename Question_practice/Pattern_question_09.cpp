/*
Pattern question (09[a])
1 2 3 4
  2 3 4
    3 4 
      4
*/
// #####################################################################
#include<iostream>
using namespace std;
// Function for Pattern question (09[a])
void pattern_question_9a(int n){
    int row = 1;
    while (row<=n)
    {
        int val = row;
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
            cout<< val << " ";
            val++;
            col++;
        }
        cout<<"\n";
        row++;
    }
}
/*
Pattern question (09[b])
        1
      2 2
    3 3 3
  4 4 4 4
  */
 // #####################################################################
 // Function for Pattern question (09[b])
void pattern_question_9b(int n){
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
            cout<< row << " ";
            col++;
        }
        cout<<"\n";
        row++;
    }
}
// Main function 
int main()
{
    int n;
    cin >> n;
    // Function call
    pattern_question_9a(n);
    cout<<"\n";
    pattern_question_9b(n);
}










