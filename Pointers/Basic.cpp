#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Initializing pointers
    int a;
    a = 36;
    int *aptr = &a;

    cout<<a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    aptr++;       // Increment aptr by 4 bytes bcz sizeof(int) = 4 bytes 
    cout<<aptr<<endl;

    // Array Initialization using pointers
    int arr[] = {29,36,108};
    cout<<*arr<<endl;  //print only first element of array
    int *ptr = arr;
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<"\n";

    // pointers to pointers
    int b = 29;
    int *p;
    p = &b;
    cout<<*p<<endl;
    int **q = &p;

    cout<<*q<<endl;
    cout<<**q<<endl;

    return 0;
}