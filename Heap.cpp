#include<iostream>
using namespace std;

int main()
{
    int a = 36; //Stored in stack
    int *p = new int(); // allocate memory in heap
    *p = 10;

    delete(p); // Deallocate memory

    p = new int[4];

    delete[]p;

    p = NULL;

return 0;
}